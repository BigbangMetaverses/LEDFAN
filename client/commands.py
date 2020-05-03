from argparse import ArgumentParser
from typing import Callable, Any

import requests


def post(command: ArgumentParser, name: str, help: str, uri: Callable[[Any], str]):
    command.add_argument(
        name, help=help
    )
    command.set_defaults(func=lambda args: requests.post(f"http://{args.ip}/{uri(args)}"))


def setup_set_behavior(command: ArgumentParser):
    post(
        command, "id", "The behavior ID",
        lambda args: f"/behavior/set?id={args.id}"
    )
