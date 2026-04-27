◆══════════════════════════════════════◆

# << RELEASE RECOLLECTION >>

*記憶解放 — ZMK Firmware System Interface*

◆══════════════════════════════════════◆

> **[ SYSTEM ANNOUNCEMENT ]**
> 記憶は消えない。剣技は身体に刻まれている。
> トラックボールが軌跡を描いた瞬間、封じられた技が解放される。
> ── System Call, Enhance Armament. Release Recollection.

══════════════════════════════════════════════

## ◆ KEYMAP DISPLAY ── キーマップ図

> [ CARDINAL ] Push のたびに自動更新されます（`.github/workflows/draw-keymap.yml`）

![keymap](keymap.svg)

══════════════════════════════════════════════

## ◆ SYNTHESIS REGISTRY ── レイヤー構成

*カーディナルシステムにより展開されたシンセシス一覧。アクティブなシンセシスは STATUS CRYSTAL が示す。*

| SYNTHESIS | NAME | DESCRIPTION |
|---|---|---|
| [ Synthesis 00 ] | default | 通常入力 |
| [ Synthesis 01 ] | FUNCTION | ファンクションキー・カーソル |
| [ Synthesis 02 ] | ARROW_SIGN | 矢印・記号 |
| [ Synthesis 03 ] | NUM | テンキー |
| [ Synthesis 04 ] | MOUSE | マウス操作 |
| [ Synthesis 05 ] | SCROLL | スクロール |
| [ Synthesis 06 ] | Bluetooth | BT接続切替・bootloader |
| [ Synthesis 07 ] | GESTURE_E | ジェスチャー（E キー長押し）|
| [ Synthesis 08 ] | GESTURE_R | ジェスチャー（R キー長押し）|
| [ Synthesis 09 ] | GESTURE_S | ジェスチャー（S キー長押し）|
| [ Synthesis 10 ] | GESTURE_B | ジェスチャー（B キー長押し）|
| [ Synthesis 11 ] | GESTURE_T | ジェスチャー（T キー長押し）|
| [ Synthesis 12 ] | GESTURE_A | ジェスチャー（A キー長押し）|
| [ Synthesis 13 ] | GESTURE_D | ジェスチャー（D キー長押し）|
| [ Synthesis 14 ] | GESTURE_W | ジェスチャー（W キー長押し）|
| [ Synthesis 15 ] | SNIPE | スマートスネイプ（Tab ホールド or L2+L3 同時ホールドで起動。デフォルトと同一バインド、CPI 自動低減。クリック・キー入力で自動解除。**K ホールド中はトラックボールがスクロールホイールに変換される**）|
| [ Synthesis 16 ] | NUM_SMART | スマート数字入力（数字キーで自動維持） |

══════════════════════════════════════════════

## ◆ SWORD SKILLS ── ジェスチャーマッピング表

*剣技は身体の記憶に刻まれている。対応キーを**長押ししながらセンサーを動かした瞬間**、技が解放される。*
*上下左右 4 方向を認識。Shift 同時押しで上位技へと昇華する。*

──────────────────────────────────────────────

### ◆ SWORD SKILL : SHARP NAIL  [ KEY : E ] ── GESTURE_E（E キー長押し）― 編集剣技

*素早い連続斬撃。コピー・カット・ペーストを一息に刻み込む。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Cmd+C` コピー | `Cmd+X` カット |
| ↓ 下 | `Cmd+V` ペースト | `Cmd+Shift+V` フォーマットなしペースト |
| ← 左 | `Cmd+Z` アンドゥ | `Cmd+P` |
| → 右 | `Cmd+Shift+Z` リドゥ | `Cmd+Return` |

──────────────────────────────────────────────

### ◆ SWORD SKILL : VORPAL STRIKE  [ KEY : R ] ── GESTURE_R（R キー長押し）― 選択剣技

*渾身の一撃でテキストを貫く。精密な範囲指定を一刀両断する。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Cmd+A` 全選択 | `Cmd+Shift+↑` |
| ↓ 下 | `Cmd+X` カット | `Cmd+Shift+↓` |
| ← 左 | `Alt+Shift+←` 単語選択（左） | `Cmd+Shift+←` 行頭まで選択 |
| → 右 | `Alt+Shift+→` 単語選択（右） | `Cmd+Shift+→` 行末まで選択 |

──────────────────────────────────────────────

### ◆ SWORD SKILL : THE ECLIPSE  [ KEY : S ] ── GESTURE_S（S キー長押し）― 捕捉剣技

*全てを覆い封じる最終奥義。画面そのものを闇に刻み込む。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Cmd+Shift+3` 全画面スクショ（ファイル保存） | `Ctrl+Cmd+Shift+3` 全画面（クリップボード） |
| ↓ 下 | `Escape` | `Escape` |
| ← 左 | `Cmd+Shift+4` 範囲選択スクショ | `Ctrl+Cmd+Shift+4` 範囲選択（クリップボード） |
| → 右 | `Cmd+Shift+5` スクショメニュー | `Cmd+Shift+5` |

──────────────────────────────────────────────

### ◆ SWORD SKILL : HOWLING OCTAVE  [ KEY : B ] ── GESTURE_B（B キー長押し）― 音響剣技

*8連の咆哮が空間を震わせる。輝度と音量を意のままに操る。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | 輝度上げる | `F13` |
| ↓ 下 | 輝度下げる | ミュート |
| ← 左 | 音量下げる | `F19` |
| → 右 | 音量上げる | `F18` |

──────────────────────────────────────────────

### ◆ SWORD SKILL : SONIC LEAP  [ KEY : T ] ── GESTURE_T（T キー長押し）― 航路剣技

*音速で次の場所へ跳躍する。タブという扉を瞬時に開閉する。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Cmd+T` 新規タブ | `Cmd+R` リロード |
| ↓ 下 | `Cmd+W` タブを閉じる | `Cmd+F` 検索 |
| ← 左 | `Ctrl+Shift+Tab` 前のタブ | `Cmd+-` ズームアウト |
| → 右 | `Ctrl+Tab` 次のタブ | `Cmd++` ズームイン |

──────────────────────────────────────────────

### ◆ SWORD SKILL : VERTICAL SQUARE  [ KEY : A ] ── GESTURE_A（A キー長押し）― 探索剣技

*四方を刻む連続剣技。アプリの格子を縦横に切り裂き、目標へ飛ぶ。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Ctrl+B` | `Ctrl+Alt+Cmd+1` |
| ↓ 下 | `Cmd+Space` Spotlight | `Ctrl+Alt+Cmd+4` |
| ← 左 | `Cmd+Shift+Tab` アプリ切替（前） | `Ctrl+Alt+Cmd+3` |
| → 右 | `Cmd+Tab` アプリ切替（次） | `Ctrl+Alt+Cmd+2` |

──────────────────────────────────────────────

### ◆ SWORD SKILL : STARBURST STREAM  [ KEY : D ] ── GESTURE_D（D キー長押し）― 空間剣技

*16連の星屑が全方位を薙ぎ払う。Mission Control で全シンセシスを一望する。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `Ctrl+↑` Mission Control | `F12` |
| ↓ 下 | `Cmd+H` ウィンドウを隠す | `Ctrl+↓` |
| ← 左 | `F14` | `F11` |
| → 右 | `F15` | `F20` |

──────────────────────────────────────────────

### ◆ SWORD SKILL : HORIZONTAL  [ KEY : W ] ── GESTURE_W（W キー長押し）― 踏破剣技

*水平に薙ぐ一閃。左右に刻まれた履歴の軌跡を自在に辿る。*

| 方向 | 通常 | Shift 同時押し |
|---|---|---|
| ↑ 上 | `F3` Exposé / Mission Control | `F17` |
| ↓ 下 | `Cmd+M` ウィンドウを最小化 | `F11` |
| ← 左 | `Cmd+[` ブラウザ戻る | `Cmd+Q` アプリ終了 |
| → 右 | `Cmd+]` ブラウザ進む | `Cmd+W` タブ/ウィンドウを閉じる |

══════════════════════════════════════════════

## ◆ MOVEMENT PARAMETERS ── トラックボール → キー変換（アロープロファイル）

*特定のシンセシスでは、トラックボールの動きがキー入力へと変換される。剣技とは独立した力で、**動かし続ける限り連続入力**される。*

### ◆ PRIMARY FORMATION ── 通常プロファイル（arrows-profiles）

| SYNTHESIS | 上 | 下 | 左 | 右 | one_shot | 備考 |
|---|---|---|---|---|---|---|
| 2 ARROW_SIGN | 選択↑ | 選択↓ | 選択← | 選択→ | なし | 自動リピートなし |
| 3 NUM | `↑` | `↓` | `←` | `→` | なし | 加速あり |
| 6 Bluetooth | `強制終了(Cmd+Opt+Esc)` | `画面ロック(Ctrl+Cmd+Q)` | `LANG2(英数)` | `LANG1(かな)` | あり | 斜め無効・余り有効 |

### ◆ ALT FORMATION ── Shift 同時押し or arrows_alt 起動時（arrows-alt-profiles）

| SYNTHESIS | 上 | 下 | 左 | 右 | one_shot |
|---|---|---|---|---|---|
| 15 SNIPE | `SCROLL_UP` | `SCROLL_DOWN` | `SCROLL_LEFT` | `SCROLL_RIGHT` | なし |
| 2 ARROW_SIGN | `Cmd+A` | `Cmd+V` | `Cmd+X` | `Cmd+C` | あり |
| 3 NUM | `Undo` | `Redo` | `BS` | `Del` | あり |
| 6 Bluetooth | 再生/停止(`C_PP`) | 停止(`C_STOP`) | 前のトラック(`C_PREV`) | 次のトラック(`C_NEXT`) | なし |

> **[ SYSTEM ]** L15 はキーバインドではなく `&ht_arrows_alt 15 K`（K ホールド）で起動。ドライバ拡張コード `2000-2003` が `input_report_rel(REL_WHEEL/REL_HWHEEL)` を直接発行するためホスト側はマウスホイールとして認識する。

> **[ SYSTEM ]** **one_shot** — 有効時、センサーの動きに対してキーが 1 度だけ送出される。
> 押しっぱなし状態にはならない。連続入力が不要な操作に適用される。

### ◆ ACCELERATION SYSTEM ── 加速設定（Synthesis 03）

- 閾値を超えると最大 1/4 速度まで加速
- 初回入力から 250ms 後に連続入力開始、100ms 間隔でリピート

══════════════════════════════════════════════

## ◆ STATUS CRYSTAL REGISTRY ── LED カラー（シンセシスインジケーター）

*アクティブなシンセシスに応じてクリスタルの発光色が変化する。現在位置をフラクトライトに知らせるインジケーター。*

| SYNTHESIS | COLOR |
|---|---|
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
| 10 GESTURE_B | 0 |
| 11 GESTURE_T | 6 |
| 12 GESTURE_A | 7 |
| 13 GESTURE_D | 1 |
| 14 GESTURE_W | 2 |
| 15 SNIPE | 7 |
| 16 NUM_SMART | 3 |

══════════════════════════════════════════════

## ◆ EQUIPPED MODULES ── 依存モジュール

*このシステムを支える仲間たち。一つでも欠ければ、剣技は発動しない。*

| MODULE | REPOSITORY | DESCRIPTION |
|---|---|---|
| zmk | zmkfirmware/zmk | ZMK 本体 |
| zmk-pmw3610-driver | eincode0/zmk-pmw3610-driver | PMW3610 トラックボールドライバー |
| zmk-listeners | ssbb/zmk-listeners | レイヤーリスナー |
| zmk-mouse-gesture | kot149/zmk-mouse-gesture | マウスジェスチャー認識 |
| zmk-scroll-snap | kot149/zmk-scroll-snap | スクロール軸スナップ（X/Y軸整列） |
| zmk-rgbled-widget | caksoylar/zmk-rgbled-widget | RGB LED インジケーター |
| zmk-pointing-acceleration-alpha | nuovotaka/zmk-pointing-acceleration-alpha | ポインタ加速度 |
| zmk-behavior-insomnia | badjeff/zmk-behavior-insomnia | BLE 接続中スリープ防止 |
| zmk-tri-state | urob/zmk-tri-state | アプリ切替スワッパー |
| zmk-auto-layer | urob/zmk-auto-layer | Smart Num（数字入力で自動レイヤー維持） |
| zmk-input-processor-scroll-inertia | mjmjm0101/zmk-input-processor-scroll-inertia | iOS 風 慣性スクロール（〈Phantom Drift〉）|

══════════════════════════════════════════════

## ◆ CHARACTER PARAMETERS ── 設定値サマリー

*フラクトライトの稼働を支える各種パラメータ。数値一つが安定と崩壊を分ける。*

### NERVE LINK STABILITY ── BLE・接続安定性

*STL とホストを繋ぐ生命線。接続が切れれば、フラクトライトは消滅する。*

| 設定 | 値 | 対象 | 効果 |
|---|---|---|---|
| Experimental Conn | R側(Elucidator)のみ有効、L側無効 | R側（Central） | Central側でホスト向けBLE接続安定化のため有効化 |
| NFCT_PINS_AS_GPIOS | 有効 | R・L両側 | NFC無線とBLEの干渉防止（安定版2つともあり） |
| BT_GAP_AUTO_UPDATE_CONN_PARAMS | 有効 | R・L両側 | 接続後に自動パラメータ再交渉（kabutokoma準拠） |
| BT_CONN_PARAM_UPDATE_TIMEOUT | 1000ms | R・L両側 | 接続から1秒後にパラメータ更新要求 |
| TX Power | +8dBm | R・L両側 | 最大送信出力 |
| Split BLE Latency | 0 | R側（Central） | デフォルト 30 から 0 へ変更（Left 側キー入力の遅延パケット許容をゼロに） |
| Split BLE Timeout | 600 | R側（Central） | ホスト向け TIMEOUT と統一 |
| BT Max Conn | 5 | R側（Central） | 4プロファイル + 1スプリット接続（プロファイル数+1が正しい設定） |
| BT Max Paired | 5 | R側（Central） | プロファイル切替用（Mac/iPhone等） |
| BT_PERIPHERAL_PREF_MIN_INT | 6 (7.5ms) | R側 | 接続インターバル下限。前回MAX_INT=12固定は削除済み→今回は範囲指定で再試験 |
| BT_PERIPHERAL_PREF_MAX_INT | 6 (7.5ms) | R・L両側 | 接続インターバル上限（L側もR側と同期） |
| Insomnia pingInterval | 3秒 | R・L両側 | keepaliveを高頻度化（L側にも追加） |

### MOTION SENSOR CONFIG ── トラックボールセンサー（Elucidator.conf）

*センサーの挙動を制御するパラメータ。省電力モードへの移行速度を調整する。*

| 設定 | 値 | 効果 |
|---|---|---|
| PMW3610 REST移行時間 | 3000ms | RUN モード維持を延長し、短時間アイドル復帰の遅延を抑制 |
| PMW3610 REST1 サンプル間隔 | 10ms | REST 中のサンプリング間隔を半減し、復帰時の応答を改善 |
| PMW3610 ポーリングレート | 125Hz (POLLING_RATE_125) | 起動遅延を削除しポーリングレート固定モードに変更 |
| PMW3610 force-awake | 有効 | スリープ移行を抑制し、起動遅延ゼロを維持 |
| PMW3610 4ms モード | **無効**（削除済み） | BLE 7.5ms インターバルとのミスマッチによるポインタジャンプを防止 |
| PMW3610 CPI | 2200 | 通常カーソル CPI（`pointer_accel.sensor-dpi` も同値）。SNIPE 中はドライバが自動低減 |
| PMW3610 cpi-layers | `<4 3200>` | L4 MOUSE アクティブ時はセンサー CPI を 3200 に動的切替（〈Resolution Shift〉) |
| arrows-alt L15 tick | 80ms | K ホールドスクロールの精密度。値が大きいほど 1 ノッチが大きい動きを要求 |
| L5 SCROLL スケーラー | `4/675`（≒0.6%） | 公式 `mjmjm0101/zmk-input-processor-scroll-inertia` が PMW3610+125Hz 向けに校正した推奨比率。inertia の `scale/scale-div` と完全一致させること |
| ドライバ scroll-accel | **削除** | 〈Phantom Drift〉慣性導入により倍率の重ね掛けを回避するためドライバ側加速を撤去 |
| L5 SCROLL chain | `mapper → inertia → scaler 4/675` | scroll-snap は撤去。慣性出力は `zmk_endpoint_send_mouse_report()` 経由で chain を**バイパス**して HID へ直接送信されるため、scaler の前配置で OK |

### PHANTOM DRIFT ── 慣性スクロール（zmk-input-processor-scroll-inertia）

*指を離した後も剣閃が空を切る ── iOS 風の滑走をトラックボールに刻む。*

Mk.VI で**公式推奨プリセットに完全準拠**し、最小限のオーバーライドだけ残す構成へ収束。

| プロパティ | 値 | 効果 |
|---|---|---|
| `axis` | 0（2D） | 縦横どちらでも慣性が乗る |
| `layer` | 5 | L5 OFF 時に内部状態をリセット。他レイヤーへの慣性イベントリーク防止 |
| `scale` / `scale-div` | **4 / 675** | 公式が PMW3610+125Hz 向けに校正した推奨比率（≒0.6%）。下流 `&zip_scroll_scaler 4 675` と完全一致 |
| `min-events` | 3 | 短いフリックでも arm 成立（公式 default 10 だと約 160ms 連続入力が必要だったため下げた）|
| 他全プロパティ | **デフォルト** | `gain/blend=300/700`, `start=40`, `move=80`, `decay-*=990`, `friction=35`, `stop=7`, `tick=8`, `release=24`, `peak-decay=990`, `decel-samples=3`, `decel-ratio=850` を全て公式デフォルトのまま採用 |

> **[ SYSTEM ]** 配置は **`mapper → inertia → scaler 4/675`**。慣性出力は `zmk_endpoint_send_mouse_report()` を直接呼んで HID 経路へ送信され、下流 scaler を**バイパス**するため、scaler の前後どちらに置いても出力には影響しない。ただし inertia 自身の `scale/scale-div` は scaler 引数と一致させること（ライブ入力と慣性出力で同じスケーリングを適用するため）。scroll-snap は撤去（公式例にも含まれていない）。

### THREAD STACK ── スレッドスタック（クラッシュ対策）

*システムの安定を支える根幹。スタックが尽きればフラクトライトは瞬く間に崩壊する。*

| 設定 | 値 | 対象 | 備考 |
|---|---|---|---|
| EC11スレッド | 4096 bytes | Dark_Repulser | |

══════════════════════════════════════════════

## ◆ SYSTEM LOG ── 変更履歴

*カーディナルシステムの監視下に刻まれた改変の記録。カーディナルが見届ける限り、ここに刻まれたものは永劫に消えることはない。*

| DATE | ENTRY |
|---|---|
| 2026-04-14 | `zmk-scroll-snap` モジュール導入。SCROLLレイヤー（L5）でX/Y軸スナップを有効化し、縦スクロール時の横流れを抑制 |
| 2026-04-14 | GESTURE_M → GESTURE_B リネーム（トリガーキー M → B）。gB_up=F19 / gB_down=Mute に変更。Bluetooth レイヤー（L6）の arrows-alt-profiles をメディア操作（C_PREV/C_NEXT/C_VOL_DN/C_VOL_UP）へ変更。ドライバに Consumer page メディアキー対応追加 |
| 2026-04-14 | `force-awake-4ms-mode` を削除。BLE 接続インターバル 7.5ms に対し 4ms サンプリングが生じさせていたポインタジャンプを解消。`force-awake` は維持しスリープ遅延ゼロを継続 |
| 2026-04-15 | Bluetooth レイヤー（L6）の arrows-profiles 上下を変更。上: `MissionCtrl` → `強制終了(Cmd+Opt+Esc)` / 下: `AppExpose` → `画面ロック(Ctrl+Cmd+Q)` |
| 2026-04-15 | GESTURE_B の通常ジェスチャーを刷新。上: 輝度UP / 下: 輝度DN / 左: 音量DN / 右: 音量UP に変更 |
| 2026-04-15 | Bluetooth レイヤー（L6）arrows-alt-profiles を変更。上: 再生/停止(C_PP) / 下: 停止(C_STOP) / 左: 前トラック(C_PREV) / 右: 次トラック(C_NEXT) |
| 2026-04-15 | README 誤記修正。GESTURE_D 左右（F15↔F14 入れ替え）、GESTURE_W Shift上下（Home→F17、End→F11）を実コードに合わせ訂正 |
| 2026-04-17 | `CONFIG_ZMK_SPLIT_BLE_PREF_LATENCY=0` / `CONFIG_ZMK_SPLIT_BLE_PREF_TIMEOUT=600` を削除。ホスト BLE 接続不可の原因となっていたスプリット接続パラメータを排除 |
| 2026-04-18 | デフォルトレイヤー（L0）親指行を変更。左親指内側: `SPACE(L3→NUM)` → `CAPS(L2→ARROW_SIGN)` / 親指エンコーダ右: `CAPS(L2)` → `SPACE(L3)` にスワップ |
| 2026-04-18 | ジェスチャー縦横判定を改善。`zmk-mouse-gesture` をフォーク（`eincode0`）し `detect_direction()` を3:2比率に変更。斜め方向は判定せず蓄積継続することで誤判定を抑制 |
| 2026-04-18 | ビルド613以降のホスト BLE 不接続を修復。ビルド612の誤った削除を取り消し、`CONFIG_ZMK_SPLIT_BLE_PREF_LATENCY=0` / `CONFIG_ZMK_SPLIT_BLE_PREF_TIMEOUT=600` をビルド598相当で復活 |
| 2026-04-18 | ホスト BLE 接続を恒久修復。動作する debug uf2 (USB Logging 有効版) との差分調査で `CONFIG_ZMK_USB_LOGGING=y` が BLE 接続維持に必要と判明し、両側で常時 ON 化 |
| 2026-04-18 | デフォルトレイヤー（L0）親指行を再調整。`&lt 2 CAPS` と `&lt 3 SPACE` を入れ替え、さらに `&mkp MB1` とも入れ替え。最終配置は左から `&lt 2 ESC` / `&lt 3 SPACE` / `&mkp MB1`。tap 側を CAPS → ESC に変更し、エディタ/ダイアログ操作の即応性を強化 |
| 2026-04-18 | スリープ復帰直後のカーソル遅延を緩和。`CONFIG_PMW3610_ALT_RUN_DOWNSHIFT_TIME_MS` 1000→3000 / `CONFIG_PMW3610_ALT_REST1_SAMPLE_TIME_MS` 20→10。RUN モードの維持時間を延ばし、REST 中のサンプリング間隔を半減 |
| 2026-04-18 | `force-awake` バグ修正。ZMK IDLE 遷移時に `pmw3610_set_performance(enabled=false)` が呼ばれ force-awake ビット（0xF0）がクリアされセンサーが REST1 へ降格、不定期な遅延の根本原因となっていた。`config->force_awake` が真なら ZMK activity 状態に関わらず常に 0xF0 をセットするよう修正（ドライバ `ae758b74`） |
| 2026-04-20 | `CONFIG_ZMK_IDLE_TIMEOUT` を 30000ms → 300000ms（5分）に変更（両側）。ZMK が IDLE に入るのを遅らせてスプリット BLE 接続のアイドル化を抑制し、動かし始めの遅延を改善 |
| 2026-04-20 | ホスト BLE 接続維持の真因を特定し `USB_LOGGING` 依存を剥離。`CONFIG_ZMK_USB_LOGGING=y` 必須（2026-04-18, `2839600`）の正体は、同シンボルが裏で `select` していた **`CONFIG_LOG=y`（ログ処理スレッド）** が BLE 初期化のスケジューラ挙動を救っていたことと判明。USB スタック 3 点（`USB_DEVICE_STACK` / `USB_CDC_ACM` / `USB_DEVICE_INITIALIZE_AT_BOOT`）は不要と切り分け確定。両側で `USB_LOGGING=n` + `CONFIG_LOG=y` 構成へ移行し、USB CDC ACM の不要列挙を排除 |
| 2026-04-21 | `west.yml` の pmw3610-driver revision を `c8ccf3f` → `74c851e` に更新。`ae758b74` の force-awake 常時維持修正がファームウェアに未反映だった（west.yml がそれより古い SHA を指していた）ため、修正を確実に適用。これが「たまに遅延する」の真因 |
| 2026-04-21 | ポーリングレートを 125Hz に戻す。250Hz 化でゆっくり動かす際の delta 値が半減し、加速プロセッサの蓄積遅延が増大してカーソルが遅れてくる問題が発生。force_awake 修正により REST モードに入らなくなったため 125Hz でも動き始め遅延は解消済み。`min-factor` は 1000（等倍）を維持 |
| 2026-04-21 | 2サンプル蓄積をドライバに復活（`3dec022`）。`c09a555` で削除後、125Hz HID レポートが BLE 7.5ms 接続インターバルを上回りキュー圧迫で実際の遅延が発生していた。2サンプル合算（実効 62.5Hz）に戻して安定化 |
| 2026-04-25 | `conditional_layers` で SNIPE レイヤー（L15）への同時ホールド起動を追加。左親指 `&lt 2 ESC`（L2）と `&lt 3 SPACE`（L3）を同時ホールドで自動的に L15 が展開される。V キーのジェスチャーホールド（`gesture_mo_kp 15 V`）を廃止し `&kp V` に戻す |
| 2026-04-25 | SNIPE（L15）をスマートスネイプ化。Tab ダブルタップで起動する `smart_snipe` behavior を追加。レイヤー内容をデフォルト複製に変更し、I/K スクロールジェスチャーを新設の SNIPE_SCROLL（L17）へ向けた。SNIPE_SCROLL は overlay の `snipe_scroller` によりトラックボールを低速スクロールに変換する |
| 2026-04-25 | `CONFIG_ZMK_KEYMAP_LAYERS_MAX=18` を両側 .conf に追加。L17 追加によりデフォルト上限（16）を超えていたため BT 接続不可になっていた問題を修正 |
| 2026-04-26 | 〈Arrows Profile〉拡張 — pmw3610 driver にスクロール出力経路を追加（`f1d9b30`）。コード `2000`(up)/`2001`(down)/`2002`(left)/`2003`(right) を `pmw3610_send_arrow_key` で受け取ると HID キー経路をバイパスし `input_report_rel(REL_WHEEL/REL_HWHEEL)` を直接発行 |
| 2026-04-26 | L17（SNIPE_SCROLL）追加で再び BT 接続不可が発生し撤去。原因不明だが L17 レイヤー追加自体が BT を阻害するパターンが 5回連続で再現。input-listener / arrows-profiles など試した経路に依存せず、L17 ファイル include の有無のみで切り分けられる。SNIPE 中のスクロールは諦めて K → 通常の `&kp K` に戻す |
| 2026-04-26 | SNIPE スクロールを `arrows-alt-profiles` 経路で再実装。新レイヤー追加なしのため L17 問題を回避。`ht_arrows_alt` hold-tap behavior を新設し SNIPE の K を `&ht_arrows_alt 15 K` に。K タップ=K、K ホールドで `&arrows_alt 15`（L15 はすでに有効なので no-op）が alt_mode フラグを ON にし、arrows-alt-profiles の L15 エントリ（`2000-2003` 40ms）が発火してトラックボール→スクロールホイールイベント変換 |
| 2026-04-26 | ドライバ修正（`071d9ff`）— `snipe-layers` 分岐が L15 で先行ヒットして arrows 経路に到達しなかったため、`arrows_alt_mode` が ON の時は SNIPE 分岐をスキップする条件を追加。これで K ホールド中だけ SNIPE モードが一時無効化されてスクロールが発火するようになる |
| 2026-04-26 | 通常カーソル CPI を `3200` → `2200` に変更（精密化）。`pointer_accel.sensor-dpi` も同値に同期。スクロール精度向上のため arrows-alt-profile L15 の tick を `40ms` → `80ms` に。1 ノッチあたり 2 倍の動きを要求するようになり、長文スクロールの誤差が減る |
| 2026-04-26 | README 整備。SYNTHESIS REGISTRY から廃止済みの L17 SNIPE_SCROLL を削除、L15 SNIPE 説明に K ホールドスクロール機能を追記。ALT FORMATION テーブルに L15（SCROLL_UP/DOWN/LEFT/RIGHT）エントリ追加。CHARACTER PARAMETERS に CPI と tick の現行値を反映 |
| 2026-04-26 | 〈Resolution Shift〉— ドライバに `cpi-layers` プロパティを新設（`60a0782`）。`<layer cpi ...>` の uint16 ペアで指定し、`zmk_layer_state_changed` イベントを購読してセンサー CPI を実行時切替。L4 MOUSE = 3200 を設定し、マウス操作時は通常 2200 から高 CPI に自動シフト |
| 2026-04-26 | 〈Flick Burst〉— `pointer_accel` を強化。`max-factor` 8000 → 12000、`acceleration-exponent` 2 → 3。低速域は等倍を維持しつつ、強くフリックした瞬間だけ最大 ×12 まで一気に加速する曲線へ調整。精密操作と高速移動を両立 |
| 2026-04-26 | 〈Connectivity Overdrive〉提案を撤回。`CONFIG_ZMK_SPLIT_BLE_RECV_SPEEDUP` および `CONFIG_ZMK_MOUSE_TICK_DURATION` は現行 ZMK に存在しない Kconfig シンボルでビルドが中断したため両側 .conf から除去（コミット `72bb211` をリバート） |
| 2026-04-26 | 〈Reflex Boost〉— キースキャンデバウンスを 5ms → 3ms に短縮（`CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS=3` / `RELEASE_MS=3` を両側）。キー押下/離しのレイテンシを直接削減 |
| 2026-04-26 | 〈Adaptive Aura〉撤回 — `CONFIG_BT_CTLR_LE_POWER_CONTROL_SUPPORT` はプロンプトを持たない内部シンボル（select される側）で直接代入不可。xiao_ble は Nordic SDC を使うため経路自体が異なると判断し撤去 |
| 2026-04-26 | 〈Bandwidth Surge〉— BLE ACL TX バッファを 3 → 10 / EVT RX バッファを 16 に増量（両側）。Zephyr の static assert（`BT_BUF_EVT_RX_COUNT > BT_BUF_ACL_TX_COUNT`）を満たすよう RX 側も同時に拡張。HID イベントバースト時のキュー詰まりを緩和 |
| 2026-04-26 | 〈Flick Burst〉さらに増幅。`max-factor` 12000 → 16000（×16）、`speed-max` 2000 → 1500。ピーク倍率を底上げしつつ、軽めのフリックでも最大倍率に届くよう感度を引き上げ |
| 2026-04-26 | 〈Sealed Aim〉— SNIPE（L15）で `pointer_accel` をバイパスする per-layer override を追加。stock ZMK input-listener は `process-next` 未指定の override が一致すると base 処理をスキップする仕様を利用し、`snipe_pure { layers = <15>; input-processors = <&tb_drop_all 1 1>; };` を設置。SNIPE 中は加速曲線を完全無効化し、ドライバ側 SNIPE 分割の精度をそのまま手元へ届ける |
| 2026-04-27 | 〈Tempered Wheel〉— L5 SCROLL のホイール出力をスケーラー `&zip_snipe_scroll_scaler 1 2` で半速化。`zip_xy_to_scroll_mapper` の直後・`zip_scroll_snap` の前に挿入し、トラックボールの移動量をホイールイベントへ変換した直後に 1/2 倍へ縮約。長文スクロールでの行き過ぎを抑え、軸スナップ判定もより安定する |
| 2026-04-27 | 〈Phantom Drift〉— iOS 風 慣性スクロールを正式導入。新規依存 `mjmjm0101/zmk-input-processor-scroll-inertia` を `west.yml` に追加し、L5 SCROLL の input-processors 末尾に `&zip_scroll_inertia` を接続。指を離した後もホイール出力が滑り続ける挙動を実装。`gain=400 / blend=600 / start=30 / move=60 / decay-fast=985 / decay-slow=992 / decay-tail=997 / friction=25 / stop=5` の「キビキビ」プロファイル。同時にドライバ側 `scroll-accel` 系 3 行（max-mult=6 / threshold=30）を撤去し倍率の重ね掛けを排除。自前の `zip_snipe_scroll_scaler` ノード（旧称）を削除し、ZMK 標準の `zip_scroll_scaler`（`track-remainders` 有効）を直接利用するよう整理。旧 overlay にあった `zip_scroll_inertia` ノードはモジュール未配線かつプロパティ名も旧 API の二重デッドコードだったため、現行 API に書き直して再生 |
| 2026-04-27 | 〈Phantom Drift〉初回ビルドでラベル衝突を修正。`zip_scroll_scaler` を自前再定義したところ ZMK 標準の同名ノード（`/zip_scroll_scaler`）と二重宣言になり devicetree がエラー。自前ノードを削除して標準を直接参照する形に変更（標準は同 compatible/codes/cells に加え `track-remainders` も持つため機能的に上位互換）|
| 2026-04-27 | 〈Phantom Drift Mk.II〉— 実機検証フィードバック「滑らない・小刻み・すぐ止まる」を受けてチューン強化。`decay-fast` 985→993 / `decay-slow` 992→996 / `decay-tail` 997→**999**（低速域を最大長持ち）/ `friction` 25→10 / `stop` 5→2（摩擦と停止判定をほぼ無効に）/ `move` 60→40（軽い動きでも慣性発動）。さらにスケーラーを `1/2` → `2/3` に緩和し、慣性プロセッサに流入する速度を確保。これで瞬間的な慣性パルスから iOS 風の連続的な滑走へ |
| 2026-04-27 | 〈Phantom Drift Mk.III〉— Mk.II でも「すぐ止まる」継続。慣性式 `v[n+1] = decay/1000 × v[n] − friction` の **`friction` 定数項が低速時に支配的**となり、`decay=999`（ほぼ無減衰）でも `friction=10` がマイナスに突き落として即停止していたことが原因と特定。**`friction` を 0 に**して線形摩擦を完全撤廃、`stop` 2→1 / `gain`+`blend` 400+600→**600+400**（入力追従強化）/ `decay-fast` 993→996 / `decay-slow` 996→998 / `move` 40→20（軽い動作でも発動）。これで低速タイムでも `decay-tail=999` の純粋な指数減衰のみが効く |
| 2026-04-27 | 〈Phantom Drift Mk.IV〉— Mk.III でもなお「滑らない」継続。公式 README 精読により**三重の根本誤配置**を発見：(1) inertia の配置位置 — 公式は `scaler の前` 推奨、我々は末端配置（精度劣化＋scaler が発するゼロ値が混入）/ (2) `scale`/`scale-div` 未設定 — `1000/1000` デフォルトは末端配置時のみ正しく、scaler 前配置では scaler 引数（2/3）と一致させる必要 / (3) `stop=1` が逆効果 — 「上げると滑らかに感じる」が公式指針。`stop=1` + `friction=0` + `decay-tail=999` の組み合わせが「HID 量子化以下の不可視ドリフト」を作って実質止まらず、低速域で出力 0 ticks のまま velocity だけ生きていた。さらに `fast`/`slow` 境界がデフォルト 0 のため `decay-fast/slow/tail` の使い分けは機能せず単一曲線扱いだった。これらを総合して完全リワーク：配置を `mapper → inertia → scaler → snap` に並べ替え、`scale=2 / scale-div=3` を inertia に追加、`decay-fast/slow/tail` を全て `992` に統一（iOS 風長滑りの公式推奨ライン）、`stop` 1→**7**、`move` 20→30 |
| 2026-04-28 | 〈Phantom Drift Mk.V〉— scaler 撤去で発動条件 `start=15 / move=15` まで攻めた診断構成を投入したところ **BLE 接続不能化**。原因はトラックボール微小ノイズで慣性が常時発火し、scaler 不在のまま `tick=8ms` ごとにホイールイベントを大量発射 → BLE 帯域圧迫。即リバートして Mk.IV 状態へ復帰 |
| 2026-04-28 | 〈Phantom Drift Mk.VI〉— モジュールソース実読で「滑らない」の真因を特定：**`min-events`（default 10）が armed 条件のゲート**となり、トラックボール 2サンプル蓄積（実効 62.5Hz）下では約 160ms 連続入力が必要だった。我々の自然な短フリックでは `tracking_count >= min-events` が成立せず慣性は一度も起動していなかった。加えて公式 README の overlay サンプルで **`scale = 4 / scale-div = 675`** が PMW3610+125Hz 向け校正値と判明（我々の `2/3 = 67%` は公式推奨 `≒0.6%` の **約 113 倍**スピード設定で、慣性が一瞬で過ぎ去って気付けない可能性大）。これを受けて公式準拠の最小構成に収束：**`scale = 4 / scale-div = 675` / `min-events = 3`** のみ指定、他は全て公式デフォルト（`gain/blend=300/700` / `start=40` / `move=80` / `decay-*=990` / `friction=35` / `stop=7` 等）。chain は `mapper → inertia → scaler 4/675` の最小形（scroll-snap 撤去）|

══════════════════════════════════════════════

## ◆ INITIALIZATION PROTOCOL ── ビルド

*STL 起動。カーディナルシステムが世界を再生成する。*

> **[ CARDINAL ]** GitHub Actions により自動ビルド（`.github/workflows/build.yml`）。
> Push を契機に自動実行される。Artifacts から `.uf2` ファイルをダウンロードし、デバイスへ書き込むことで起動が完了する。
