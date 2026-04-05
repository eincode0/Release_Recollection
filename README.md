# keyball_gesture_led

Keyball + XIAO BLE 向け ZMK ファームウェア設定。
トラックボールのマウスジェスチャーで多数のショートカットを発動できるのが特徴。

## キーマップ図

> Push のたびに自動更新されます（`.github/workflows/draw-keymap.yml`）

![keymap](keymap.svg)

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
| 16 | NUM_SMART | スマート数字入力（数字キーで自動維持） |

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
| ↓ 下 | `Cmd+H` ウィンドウを隠す | `Ctrl+↓` |
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

## トラックボール → キー変換（アロープロファイル）

特定のレイヤーではトラックボールの動きがキー入力に変換される。
ジェスチャーとは別の機能で、**動かし続けると連続入力**される。

### 通常プロファイル（arrows-profiles）

| レイヤー | 上 | 下 | 左 | 右 | one_shot | 備考 |
|---------|----|----|----|----|----------|------|
| 2 ARROW_SIGN | 選択↑ | 選択↓ | 選択← | 選択→ | なし | 自動リピートなし |
| 3 NUM | `↑` | `↓` | `←` | `→` | なし | 加速あり |
| 6 Bluetooth | `MissionCtrl` | `AppExpose` | `LANG2(英数)` | `LANG1(かな)` | あり | 斜め無効・余り有効 |

### ALTプロファイル（arrows-alt-profiles）― Shift 同時押し時

| レイヤー | 上 | 下 | 左 | 右 | one_shot |
|---------|----|----|----|----|----------|
| 2 ARROW_SIGN | `Cmd+A` | `Cmd+V` | `Cmd+X` | `Cmd+C` | あり |
| 3 NUM | `Undo` | `Redo` | `BS` | `Del` | あり |
| 6 Bluetooth | Desktop左(F15) | Desktop右(F14) | Swapper逆(Cmd+Shift+Tab) | Swapper正(Cmd+Tab) | なし |

> **one_shot**: 有効の場合、トラックボールを動かすと 1 回だけキーが送出される（押しっぱなしにならない）。

**加速設定**（layer 3）
- 閾値を超えると最大 1/4 速度まで加速
- 初回入力から 250ms 後に連続入力開始、100ms 間隔でリピート

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
| 7 GESTURE_E | 3 |
| 8 GESTURE_R | 4 |
| 9 GESTURE_S | 5 |
| 10 GESTURE_M | 0 |
| 11 GESTURE_T | 6 |
| 12 GESTURE_A | 7 |
| 13 GESTURE_D | 1 |
| 14 GESTURE_W | 2 |
| 15 SNIPE | 7 |
| 16 NUM_SMART | 3 |

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
| zmk-tri-state | urob/zmk-tri-state | アプリ切替スワッパー |
| zmk-auto-layer | urob/zmk-auto-layer | Smart Num（数字入力で自動レイヤー維持） |

---

## 設定値サマリー

### BLE・接続安定性

| 設定 | 値 | 対象 | 効果 |
|------|----|------|------|
| Experimental Conn | 無効 | R・L両側 | 安定版(LkeyMouse/kabutokoma)は未設定 |
| NFCT_PINS_AS_GPIOS | 有効 | R・L両側 | NFC無線とBLEの干渉防止（安定版2つともあり） |
| BT_GAP_AUTO_UPDATE_CONN_PARAMS | 有効 | R・L両側 | 接続後に自動パラメータ再交渉（kabutokoma準拠） |
| BT_CONN_PARAM_UPDATE_TIMEOUT | 1000ms | R・L両側 | 接続から1秒後にパラメータ更新要求 |
| TX Power | +8dBm | R・L両側 | 最大送信出力 |
| Split BLE Latency | ZMKデフォルト | R側（Central） | 明示指定なし（安定版LkeyMouseに倣う） |
| Split BLE Timeout | ZMKデフォルト | R側（Central） | 明示指定なし（TIMEOUT=1000が再接続失敗の原因の可能性） |
| BT Max Conn | 5 | R側（Central） | 4プロファイル + 1スプリット接続（プロファイル数+1が正しい設定） |
| BT Max Paired | 5 | R側（Central） | プロファイル切替用（Mac/iPhone等） |
| ホスト接続パラメータ | ZMKデフォルト | R側 | 他の安定事例に倣い明示指定なし（デフォルトが最適） |
| Insomnia pingInterval | 5秒 | R側のみ | keepaliveを高頻度化 |

### トラックボールセンサー（KeyballBLE_R.conf）

| 設定 | 値 | 効果 |
|------|----|------|
| PMW3610 REST移行時間 | 1000ms | 操作停止後すばやく省電力モードへ |

### スレッドスタック（クラッシュ対策）

| 設定 | 値 | 対象 | 備考 |
|------|----|------|------|
| EC11スレッド | 4096 bytes | KeyballBLE_L | |

---

## 変更履歴

| 日付 | 内容 |
|------|------|
| 2026-03-31 | 32kHz内部クロック切替: CONFIG_CLOCK_CONTROL_NRF_K32SRC_SYNTH=y をR・L両側に追加。XIAO BLE外部水晶不安定によるBLE supervision timeout切断対策（ZMK公式推奨） |
| 2026-03-31 | insomnia再有効化: 無効化しても切断が発生したため原因でないと判断し復元 |
| 2026-03-31 | Split BLE接続パラメータ削除: SPLIT_BLE_PREF_LATENCY/TIMEOUTを削除しデフォルトに戻す。TIMEOUT=1000が左手スリープ後の自動再接続失敗を引き起こしていた可能性 |
| 2026-04-05 | キーボード名を `KeyballBLE_R` / `KeyballBLE_L` から `Recollection` / `Recollection_L` に変更 |
| 2026-04-04 | ZMK_BLE_EXPERIMENTAL_CONN=y 削除: 1Mbps固定がカーソル遅延の原因となったため削除。2Mbps PHYに戻す |
| 2026-04-03 | BT_AUTO_PHY_UPDATE/DATA_LEN_UPDATE=n 削除: ゆっくり動かす際のカーソル違和感が出たため削除 |
| 2026-04-03 | macOS Tahoe BLE対策追加: PERIPHERAL_PREF_LATENCY=0・PERIPHERAL_PREF_TIMEOUT=600・BT_AUTO_PHY_UPDATE=n・BT_AUTO_DATA_LEN_UPDATE=n 追加（接続中の再交渉無効化・supervision timeout延長）|
| 2026-04-03 | BT_PERIPHERAL_PREF_MIN_INT/MAX_INT=12 削除: トラックボールのゆっくり動作時に違和感が出たため削除。接続間隔15ms化がサンプリングに悪影響 |
| 2026-04-03 | macOS 15 対策: BT_PERIPHERAL_PREF_MIN_INT/MAX_INT=12 追加（デフォルト6=7.5msだとMacがlatency=0接続→負荷時にsupervision timeout）、ZMK_BLE_EXPERIMENTAL_CONN=y追加（Apple BT対応のため2M PHY無効・1Mbps固定）|
| 2026-03-31 | BLE安定化（kabutokoma/LkeyMouse参考）: NFCT_PINS_AS_GPIOS追加(NFC干渉防止)・BT_GAP_AUTO_UPDATE_CONN_PARAMS追加・CLOCK_CONTROL_NRF_K32SRC_SYNTH削除・スタック/ヒープ拡張削除・EXPERIMENTAL_CONN削除。安定事例に設定を揃える |
| 2026-03-31 | ホストBLE接続パラメータ削除: PERIPHERAL_PREF_*を全削除しZMKデフォルトに戻す。他の安定事例（mable/corne/totem）は一切設定しておらず、明示指定が切断原因だった可能性。BT_MAX_CONNも2→5に修正（プロファイル数+1が正しい） |
| 2026-03-31 | RAM最適化: BT_MAX_CONN=4→2（同時接続は右←→左+右←→ホストの2本で十分）、BT_MAX_PAIRED=4→5、HEAP_MEM_POOL_SIZE=8192を追加。BLEバッファ枯渇・スタック破壊による切断対策 |
| 2026-03-31 | BLE安定化: experimental conn(2M PHY無効)、ホスト接続パラメータ調整(MAX_INT=24,LAT=2)、split latency/timeout調整、BT_MAX_CONN設定、左側にTX出力・スリープ・wakeup-source追加。BLEバッファ拡張はRAM不足でクラッシュしたため削除 |
| 2026-03-27 | BLE supervision timeout を 400→800（4秒→8秒）に延長。USB 3.0 SSD接続時の2.4GHz干渉による切断を軽減 |
| 2026-03-26 | BLE切断バグ修正: layer 6 ALT の Swapper(1070/1071)を無効化。ドライバ内 k_busy_wait がシステムワークキューをブロックしBLEを切断していた。アプリ切替は GESTURE_A (layer 12) の &swapper/&swapper_rev を使用 |
| 2026-03-21 | アロープロファイルを9要素形式に更新（one_shotフィールド追加）、layer6をLANG1/LANG2入力に変更 |
| 2026-03-21 | GESTURE_F レイヤー追加（F キー長押し：メディアリモコン） |
| 2026-03-18 | BLE接続パラメータ追加、スタックサイズ拡張（クラッシュ対策） |
| 2026-03-18 | PMW3610 REST高速化（省電力） |

---

## ビルド

GitHub Actions で自動ビルドされます（`.github/workflows/build.yml`）。
Push 時に自動実行、Artifacts から `.uf2` ファイルをダウンロードして書き込んでください。
