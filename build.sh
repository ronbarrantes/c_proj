#!/usr/bin/env bash
set -euo pipefail

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <program.c|program>"
  exit 1
fi

src="$1"

if [[ "$src" != *.c ]]; then
  src="${src}.c"
fi

if [ ! -f "$src" ]; then
  echo "error: source file '$src' does not exist"
  exit 1
fi

mkdir -p build

name="$(basename "$src" .c)"
out="build/$name"

cc -Wall -Wextra -pedantic "$src" -o "$out"

echo "Built $out"
