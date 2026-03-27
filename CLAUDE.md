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

- 作業はfeatureブランチで行うことを基本とする
- ブランチ名: `feature/[機能名]` または `fix/[修正名]`
- **mainへの直接プッシュはユーザーに確認してOKをもらってから行う**
- PRを作成する場合はタイトルは日本語OK

## README更新ルール

- **いかなる変更（設定値・キーマップ・動作・バグ修正）を行っても README.md を必ず更新する**
- 更新対象を必ずすべて確認すること：
  - `## 変更履歴` テーブルに日付・内容を追記
  - `## 設定値サマリー` の値が実際のconfと一致しているか確認・修正
  - `## レイヤー構成` `## ジェスチャーマッピング表` 等、変更に関連するセクションを更新
- READMEの更新は機能変更と**同じコミット**に含める（後から別コミットにしない）

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
