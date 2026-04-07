# Claude作業ルール

## 全体方針 — SAOスタイル

**このリポジトリのあらゆる作業はSAOスタイルで行う。**

- コミットメッセージ・PR説明・コメントなどの文章はSAOテイストを意識する
- README以外にドキュメントを追加する場合も同スタイルで記述する
- 新しいセクション・機能の命名はSAO世界観に沿った名前を優先して提案する
- 変更内容をユーザーに説明する際もSAO的な表現を自然に混ぜて構わない

## プロジェクト構成

このリポジトリは **Recollection キーボードファームウェア設定** リポジトリ。
ビルドは GitHub Actions で行い、成果物（.uf2）はArtifactsからダウンロードする。

### 主要ファイル

| ファイル | 役割 |
|---|---|
| `config/Recollection.keymap` | キーマップ定義（レイヤー・バインド） |
| `config/boards/shields/Recollection/Elucidator.overlay` | 右手側設定（トラックボール・arrows profiles等） |
| `config/boards/shields/Recollection/Elucidator.conf` | 右手側Kconfig（PMW3610パラメータ等） |
| `config/boards/shields/Recollection/Dark_Repulser.overlay` | 左手側設定 |
| `config/west.yml` | モジュール依存（ドライバのrevisionを管理） |
| `README.md` | 機能一覧・設定値ドキュメント |

### 2リポジトリ構成

- **このリポジトリ** (`Release_Recollection`): キーマップ・設定値
- **ドライバリポジトリ** (`eincode0/zmk-pmw3610-driver`): PMW3610トラックボールドライバ本体

ドライバを修正した場合、**必ず `config/west.yml` の revision をマージ後のコミットハッシュに更新する**こと。

## Gitワークフロー

### ブランチ判断基準

| ケース | 方針 |
|---|---|
| キーマップ・設定値の小さな調整（1〜3ファイル）| **mainへ直接プッシュ**（確認後） |
| west.yml更新（ドライバ revision更新のみ）| **mainへ直接プッシュ**（確認後） |
| 新機能追加・実験的変更・動作が不確かなもの | `feature/` ブランチ → PR → マージ後即削除 |
| バグ修正（影響範囲が小さい） | **mainへ直接プッシュ**（確認後） |

### ルール

- **mainへの直接プッシュは必ずユーザーに確認してからOKをもらって行う（どのデバイスからの指示でも必ず確認すること）**
- featureブランチはマージ後即削除する（`git push origin --delete feature/xxx`）
- PRを作成する場合はタイトルは日本語OK
- ブランチ名: `feature/[機能名]` または `fix/[修正名]`

## README更新ルール

- **いかなる変更（設定値・キーマップ・動作・バグ修正）を行っても README.md を必ず更新する**
- 更新対象を必ずすべて確認すること：
  - `◆ SYSTEM LOG` テーブルに日付・内容を追記（`| DATE | ENTRY |` 形式）
  - `◆ CHARACTER PARAMETERS` の値が実際のconfと一致しているか確認・修正
  - `◆ SYNTHESIS REGISTRY` `◆ SWORD SKILLS` 等、変更に関連するセクションを更新
- READMEの更新は機能変更と**同じコミット**に含める（後から別コミットにしない）

### READMEスタイルルール

README.md は **SAOスタイル** で統一されている。追記・編集時は以下を守ること：

- セクションヘッダー: `## ◆ SECTION NAME ── 日本語名` 形式
- サブセクション: `### ◆ SUB NAME ── 日本語名` 形式
- セクション区切り: `══════════════════════════════════════════════`
- サブセクション区切り: `──────────────────────────────────────────────`
- 注釈・システムメッセージ: `> **[ SYSTEM ]**` または `> **[ CARDINAL ]**` 形式
- フレーバーテキスト: `*SAOらしい一文。*` をセクション冒頭に添える
- レイヤー番号: `[ Synthesis XX ]` 形式
- 変更履歴エントリ: `| 2026-XX-XX | 内容 |` 形式でSYSTEM LOGに追記

## よくある作業フロー

### キーマップ変更（小さな調整）
1. `config/Recollection.keymap` を編集
2. README.md を更新（SYSTEM LOGを含む）
3. ユーザーに確認 → main へ直接プッシュ → ビルド確認

### キーマップ変更（大きな新機能）
1. `feature/` ブランチを作成して編集
2. README.md を更新
3. PR → マージ → **ブランチ削除** → ビルド確認

### ドライバ改修
1. `eincode0/zmk-pmw3610-driver` を修正・マージ
2. このリポジトリの `config/west.yml` の revision をマージ後ハッシュに更新
3. ユーザーに確認 → main へ直接プッシュ

### ビルド確認
```bash
gh run list --repo eincode0/Release_Recollection --limit 5
gh run view <run_id> --repo eincode0/Release_Recollection
```
