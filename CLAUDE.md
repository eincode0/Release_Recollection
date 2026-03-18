# Claude作業ルール

## Gitワークフロー

- **mainへの直接コミット禁止**
- 作業は必ずfeatureブランチで行う
- ブランチ名: `feature/[機能名]` または `fix/[修正名]`
- 作業完了後は必ずPRを作成する
- PRのタイトルは日本語OK

## ブランチ作成例

```bash
git checkout -b feature/caps-word
git checkout -b fix/ble-stability
```
