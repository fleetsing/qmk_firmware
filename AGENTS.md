# qmk_firmware instructions

This repository is only one half of the QMK workspace. The parent workspace `../` is also its own git repository and contains shared Codex instructions, the canonical QMK skill, and `docs/qmk-context.yaml`. The sibling repository `../qmk_userspace/` contains the active keymap and shared userspace logic.

For Git-sensitive work, prefer launching Codex in this repository and granting the parent workspace separately:
`codex -C ~/qmk/qmk_firmware --add-dir ~/qmk`

When the parent workspace is available, read `../AGENTS.md` and `../docs/qmk-context.yaml` before making changes.
Treat `../docs/qmk-context.yaml` as authoritative for current paths, active targets, verification commands, and known gotchas. This file only adds firmware-local guidance.

## What Is Custom Here

Treat this repository as upstream QMK except for the custom board directory:

- `keyboards/bastardkb/charybdis/3x5/fleetsing36/`

Within that directory, the current custom files are:

- `config.h`
- `keyboard.json`
- `rules.mk`

The active custom board also inherits metadata from:

- `keyboards/bastardkb/charybdis/3x5/info.json`

## When edits belong here

Use this repository for:

- board metadata
- matrix and pin definitions
- split transport and board-level config
- `CONVERT_TO` and development-board details
- hardware-specific changes that should not live in userspace

For the exact current firmware-side gotchas and known compile warnings, read `../docs/qmk-context.yaml`.

## Before editing

1. Inspect the sibling userspace repository at `../qmk_userspace/` if the task mentions layers, custom keycodes, OLED, pointing behavior, haptics, combos, or other user-facing behavior.
2. Confirm whether the task is actually a userspace change instead.

## Verification

Use the commands documented in `../docs/qmk-context.yaml`.
Keep diffs minimal and avoid edits outside the custom board path unless the task explicitly requires them.
