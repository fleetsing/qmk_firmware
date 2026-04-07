# qmk_firmware instructions

This repository is only one half of the QMK workspace. The parent workspace `../` contains shared Codex instructions, the canonical QMK skill, and `docs/qmk-context.yaml`. The sibling repository `../qmk_userspace/` contains the active keymap and shared userspace logic.

For Git-sensitive work, prefer launching Codex in this repository and granting the parent workspace separately:
`codex -C ~/qmk/qmk_firmware --add-dir ~/qmk`

When the parent workspace is available, read `../AGENTS.md` and `../docs/qmk-context.yaml` before making changes.

## What is custom here

Treat this repository as upstream QMK except for the custom board directory:

- `keyboards/bastardkb/charybdis/3x5/fleetsing36/`

Within that directory, the current custom files are:

- `config.h`
- `keyboard.json`
- `rules.mk`

## When edits belong here

Use this repository for:

- board metadata
- matrix and pin definitions
- split transport and board-level config
- `CONVERT_TO` and development-board details
- hardware-specific changes that should not live in userspace

`keyboard.json` uses `development_board: elite_c` and `pin_compatible: elite_c` as Elite-C-compatible pinout metadata. That does not mean there is a separate active `elitec/...` keyboard target for this custom board.

The actual build behavior for this board is controlled by `keyboards/bastardkb/charybdis/3x5/fleetsing36/rules.mk`, which sets `CONVERT_TO = rp2040_ce`. Treat `development_board` and `pin_compatible` as metadata unless the checked-out tree and QMK CLI confirm an alternate keyboard path.

## Before editing

1. Inspect the sibling userspace repository at `../qmk_userspace/` if the task mentions layers, custom keycodes, OLED, pointing behavior, haptics, combos, or other user-facing behavior.
2. Confirm whether the task is actually a userspace change instead.

## Verification

Preferred board-related verification commands:

- `qmk compile -kb bastardkb/charybdis/3x5/fleetsing36 -km fleetsing`

Keep diffs minimal and avoid edits outside the custom board path unless the task explicitly requires them.
