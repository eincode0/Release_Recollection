# keyball_gesture_led

Keyball + XIAO BLE 向け ZMK ファームウェア設定。
トラックボールのマウスジェスチャーで多数のショートカットを発動できるのが特徴。

---

## レイヤー構成

| # | レイヤー名 | 概要 |
|---|-----------|------|
| 0 | default | 通常入力 |
| 1 | FUNCTION | ファンクションキー・カーソル |
| 2 | ARROW_SIGN | 矢印・記号 |
| 3 | NUM | テンキー |
| 4 | MOUSE | マウス操作 |
| 5 | SCROLL | スクロール |
| 6 | Bluetooth | BT接続切替・bootloader |
| 7 | GESTURE_E | ジェスチャー（E キー長押し）|
| 8 | GESTURE_R | ジェスチャー（R キー長押し）|
| 9 | GESTURE_S | ジェスチャー（S キー長押し）|
| 10 | GESTURE_M | ジェスチャー（M キー長押し）|
| 11 | GESTURE_T | ジェスチャー（T キー長押し）|
| 12 | GESTURE_A | ジェスチャー（A キー長押し）|
| 13 | GESTURE_D | ジェスチャー（D キー長押し）|
| 14 | GESTURE_W | ジェスチャー（W キー長押し）|
| 15 | SNIPE | 低速スクロール（V キー長押し）|

---

## ジェスチャーマッピング表

対応キーを**長押ししながらトラックボールを動かす**とジェスチャーが発動。
各ジェスチャーは上下左右の 4 方向を認識。Shift を同時押しすると別コマンドになる。

### GESTURE_E（E キー長押し）― 編集系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+C` コピー | `Cmd+X` カット |
| ↓ 下 | `Cmd+V` ペースト | `Cmd+Shift+V` フォーマットなしペースト |
| ← 左 | `Cmd+Z` アンドゥ | `Cmd+P` |
| → 右 | `Cmd+Shift+Z` リドゥ | `Cmd+Return` |

### GESTURE_R（R キー長押し）― 選択・テキスト操作系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+A` 全選択 | `Cmd+Shift+↑` |
| ↓ 下 | `Cmd+X` カット | `Cmd+Shift+↓` |
| ← 左 | `Alt+Shift+←` 単語選択（左） | `Cmd+Shift+←` 行頭まで選択 |
| → 右 | `Alt+Shift+→` 単語選択（右） | `Cmd+Shift+→` 行末まで選択 |

### GESTURE_S（S キー長押し）― スクリーンショット系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+Shift+3` 全画面スクショ（ファイル保存） | `Ctrl+Cmd+Shift+3` 全画面（クリップボード） |
| ↓ 下 | `Escape` | `Escape` |
| ← 左 | `Cmd+Shift+4` 範囲選択スクショ | `Ctrl+Cmd+Shift+4` 範囲選択（クリップボード） |
| → 右 | `Cmd+Shift+5` スクショメニュー | `Cmd+Shift+5` |

### GESTURE_M（M キー長押し）― メディア・輝度系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | 音量上げる | `F13` |
| ↓ 下 | 音量下げる | ミュート |
| ← 左 | 輝度下げる | `F19` |
| → 右 | 輝度上げる | `F18` |

### GESTURE_T（T キー長押し）― ブラウザタブ系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+T` 新規タブ | `Cmd+R` リロード |
| ↓ 下 | `Cmd+W` タブを閉じる | `Cmd+F` 検索 |
| ← 左 | `Ctrl+Shift+Tab` 前のタブ | `Cmd+-` ズームアウト |
| → 右 | `Ctrl+Tab` 次のタブ | `Cmd++` ズームイン |

### GESTURE_A（A キー長押し）― アプリ切替・Spotlight系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Ctrl+B` | `Ctrl+Alt+Cmd+1` |
| ↓ 下 | `Cmd+Space` Spotlight | `Ctrl+Alt+Cmd+4` |
| ← 左 | `Cmd+Shift+Tab` アプリ切替（前） | `Ctrl+Alt+Cmd+3` |
| → 右 | `Cmd+Tab` アプリ切替（次） | `Ctrl+Alt+Cmd+2` |

### GESTURE_D（D キー長押し）― ウィンドウ・Mission Control系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Ctrl+↑` Mission Control | `F12` |
| ↓ 下 | `Cmd+H` ウィンドウを隠す | `F16` |
| ← 左 | `F15` | `F11` |
| → 右 | `F14` | `F20` |

### GESTURE_W（W キー長押し）― ウィンドウ・ブラウザ履歴系

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `F3` Exposé / Mission Control | `Home` |
| ↓ 下 | `Cmd+M` ウィンドウを最小化 | `End` |
| ← 左 | `Cmd+[` ブラウザ戻る | `Cmd+Q` アプリ終了 |
| → 右 | `Cmd+]` ブラウザ進む | `Cmd+W` タブ/ウィンドウを閉じる |

---

## LED カラー（レイヤーインジケーター）

| レイヤー | 色番号 |
|---------|-------|
| 0 default | 0 |
| 1 FUNCTION | 1 |
| 2 ARROW_SIGN | 2 |
| 3 NUM | 3 |
| 4 MOUSE | 4 |
| 5 SCROLL | 5 |
| 6 Bluetooth | 6 |
| 7〜14 GESTURE | 各ジェスチャーで異なる色 |
| 15 SNIPE | 7 |

---

## 依存モジュール

| モジュール | リポジトリ | 用途 |
|-----------|-----------|------|
| zmk | zmkfirmware/zmk | ZMK 本体 |
| zmk-pmw3610-driver | eincode0/zmk-pmw3610-driver | PMW3610 トラックボールドライバー |
| zmk-listeners | ssbb/zmk-listeners | レイヤーリスナー |
| zmk-mouse-gesture | kot149/zmk-mouse-gesture | マウスジェスチャー認識 |
| zmk-rgbled-widget | caksoylar/zmk-rgbled-widget | RGB LED インジケーター |
| zmk-pointing-acceleration-alpha | nuovotaka/zmk-pointing-acceleration-alpha | ポインタ加速度 |
| zmk-behavior-insomnia | badjeff/zmk-behavior-insomnia | BLE 接続中スリープ防止 |

---

## ビルド

GitHub Actions で自動ビルドされます（`.github/workflows/build.yml`）。
Push 時に自動実行、Artifacts から `.uf2` ファイルをダウンロードして書き込んでください。
