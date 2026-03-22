# Claude作業ルール

## プロジェクト構成

このリポジトリは **Keyball BLE キーボードファームウェア設定** リポジトリ。
ビルドは GitHub Actions で行い、成果物（.uf2）はArtifactsからダウンロードする。

### 主要ファイル

| ファイル | 役割 |
|---|---|
| `config/KeyballBLE.keymap` | キーマップ定義（レイヤー・バインド） |
| `config/boards/shields/KeyballBLE/KeyballBLE_R.overlay` | 右手側設定（トラックボール・arrows profiles等） |
| `config/boards/shields/KeyballBLE/KeyballBLE_R.conf` | 右手側Kconfig（PMW3610パラメータ等） |
| `config/boards/shields/KeyballBLE/KeyballBLE_L.overlay` | 左手側設定 |
| `config/west.yml` | モジュール依存（ドライバのrevisionを管理） |
| `README.md` | 機能一覧・設定値ドキュメント |

### 2リポジトリ構成

- **このリポジトリ** (`keyball_gesture_led`): キーマップ・設定値
- **ドライバリポジトリ** (`eincode0/zmk-pmw3610-driver`): PMW3610トラックボールドライバ本体

ドライバを修正した場合、**必ず `config/west.yml` の revision をマージ後のコミットハッシュに更新する**こと。

## Gitワークフロー

- **mainへの直接コミット禁止**
- 作業は必ずfeatureブランチで行う
- ブランチ名: `feature/[機能名]` または `fix/[修正名]`
- 作業完了後は必ずPRを作成する
- PRのタイトルは日本語OK

## README更新ルール

- 機能追加・変更・削除を行ったら **README.md を必ず更新する**
- 更新内容：機能一覧、設定値、使い方など
- READMEの更新は機能変更と同じコミットに含める

## よくある作業フロー

### キーマップ変更
1. `config/KeyballBLE.keymap` を編集
2. README.md を更新
3. feature ブランチで PR → マージ → ビルド確認

### ドライバ改修
1. `eincode0/zmk-pmw3610-driver` を `claude/setup-engineer-guidelines-B5KQs` ブランチで修正
2. `fix/` ブランチで PR → `claude/setup-engineer-guidelines-B5KQs` へマージ
3. main への PR → マージ
4. **このリポジトリの `config/west.yml` の revision をマージ後ハッシュに更新 → PR → マージ**

### ビルド確認
```bash
gh run list --repo eincode0/keyball_gesture_led --limit 5
gh run view <run_id> --repo eincode0/keyball_gesture_led
```

## ブランチ作成例

```bash
git checkout -b feature/caps-word
git checkout -b fix/ble-stability
```
