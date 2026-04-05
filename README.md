◆══════════════════════════════════════◆

# << RELEASE RECOLLECTION >>

*記憶解放 — ZMK Firmware System Interface*

◆══════════════════════════════════════◆

> **[ SYSTEM ANNOUNCEMENT ]**
> アインクラッドの戦場に降り立つ者へ。
> XIAO BLE 上に展開された ZMK ファームウェア。
> トラックボールの軌跡が剣技を呼び覚ます。

══════════════════════════════════════════════

## ◆ KEYMAP DISPLAY ── キーマップ図

> [ CARDINAL ] Push のたびに自動更新されます（`.github/workflows/draw-keymap.yml`）

![keymap](keymap.svg)

══════════════════════════════════════════════

## ◆ SYNTHESIS REGISTRY ── レイヤー構成

*整合騎士の命名規則に従い番号付けされたレイヤー一覧。アクティブなレイヤーは STATUS CRYSTAL が示す。*

| SYNTHESIS | レイヤー名 | 概要 |
|-----------|-----------|------|
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
| [ Synthesis 10 ] | GESTURE_M | ジェスチャー（M キー長押し）|
| [ Synthesis 11 ] | GESTURE_T | ジェスチャー（T キー長押し）|
| [ Synthesis 12 ] | GESTURE_A | ジェスチャー（A キー長押し）|
| [ Synthesis 13 ] | GESTURE_D | ジェスチャー（D キー長押し）|
| [ Synthesis 14 ] | GESTURE_W | ジェスチャー（W キー長押し）|
| [ Synthesis 15 ] | SNIPE | 低速スクロール（V キー長押し）|
| [ Synthesis 16 ] | NUM_SMART | スマート数字入力（数字キーで自動維持） |

══════════════════════════════════════════════

## ◆ SWORD SKILLS ── ジェスチャーマッピング表

*剣技は身体の記憶に刻まれている。対応キーを**長押ししながらセンサーを動かした瞬間**、技が解放される。*
*上下左右 4 方向を認識。Shift 同時押しで上位技へと昇華する。*

---

### ◆ SWORD SKILL : SHARP NAIL  [ KEY : E ] ── GESTURE_E（E キー長押し）― 編集剣技

*素早い連続斬撃。コピー・カット・ペーストを一息に刻み込む。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+C` コピー | `Cmd+X` カット |
| ↓ 下 | `Cmd+V` ペースト | `Cmd+Shift+V` フォーマットなしペースト |
| ← 左 | `Cmd+Z` アンドゥ | `Cmd+P` |
| → 右 | `Cmd+Shift+Z` リドゥ | `Cmd+Return` |

---

### ◆ SWORD SKILL : VORPAL STRIKE  [ KEY : R ] ── GESTURE_R（R キー長押し）― 選択剣技

*渾身の一撃でテキストを貫く。精密な範囲指定を一刀両断する。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+A` 全選択 | `Cmd+Shift+↑` |
| ↓ 下 | `Cmd+X` カット | `Cmd+Shift+↓` |
| ← 左 | `Alt+Shift+←` 単語選択（左） | `Cmd+Shift+←` 行頭まで選択 |
| → 右 | `Alt+Shift+→` 単語選択（右） | `Cmd+Shift+→` 行末まで選択 |

---

### ◆ SWORD SKILL : THE ECLIPSE  [ KEY : S ] ── GESTURE_S（S キー長押し）― 捕捉剣技

*全てを覆い封じる最終奥義。画面そのものを闇に刻み込む。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+Shift+3` 全画面スクショ（ファイル保存） | `Ctrl+Cmd+Shift+3` 全画面（クリップボード） |
| ↓ 下 | `Escape` | `Escape` |
| ← 左 | `Cmd+Shift+4` 範囲選択スクショ | `Ctrl+Cmd+Shift+4` 範囲選択（クリップボード） |
| → 右 | `Cmd+Shift+5` スクショメニュー | `Cmd+Shift+5` |

---

### ◆ SWORD SKILL : HOWLING OCTAVE  [ KEY : M ] ── GESTURE_M（M キー長押し）― 音響剣技

*8連の咆哮が空間を震わせる。音量と輝度を意のままに操る。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | 音量上げる | `F13` |
| ↓ 下 | 音量下げる | ミュート |
| ← 左 | 輝度下げる | `F19` |
| → 右 | 輝度上げる | `F18` |

---

### ◆ SWORD SKILL : SONIC LEAP  [ KEY : T ] ── GESTURE_T（T キー長押し）― 航路剣技

*音速で次の場所へ跳躍する。タブという扉を瞬時に開閉する。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Cmd+T` 新規タブ | `Cmd+R` リロード |
| ↓ 下 | `Cmd+W` タブを閉じる | `Cmd+F` 検索 |
| ← 左 | `Ctrl+Shift+Tab` 前のタブ | `Cmd+-` ズームアウト |
| → 右 | `Ctrl+Tab` 次のタブ | `Cmd++` ズームイン |

---

### ◆ SWORD SKILL : VERTICAL SQUARE  [ KEY : A ] ── GESTURE_A（A キー長押し）― 探索剣技

*四方を刻む連続剣技。アプリの格子を縦横に切り裂き、目標へ飛ぶ。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Ctrl+B` | `Ctrl+Alt+Cmd+1` |
| ↓ 下 | `Cmd+Space` Spotlight | `Ctrl+Alt+Cmd+4` |
| ← 左 | `Cmd+Shift+Tab` アプリ切替（前） | `Ctrl+Alt+Cmd+3` |
| → 右 | `Cmd+Tab` アプリ切替（次） | `Ctrl+Alt+Cmd+2` |

---

### ◆ SWORD SKILL : STARBURST STREAM  [ KEY : D ] ── GESTURE_D（D キー長押し）― 空間剣技

*16連の星屑が全方位を薙ぎ払う。Mission Control で全シンセシスを一望する。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `Ctrl+↑` Mission Control | `F12` |
| ↓ 下 | `Cmd+H` ウィンドウを隠す | `Ctrl+↓` |
| ← 左 | `F15` | `F11` |
| → 右 | `F14` | `F20` |

---

### ◆ SWORD SKILL : HORIZONTAL  [ KEY : W ] ── GESTURE_W（W キー長押し）― 踏破剣技

*水平に薙ぐ一閃。左右に刻まれた履歴の軌跡を自在に辿る。*

| 方向 | 通常 | Shift 同時押し |
|------|------|--------------|
| ↑ 上 | `F3` Exposé / Mission Control | `Home` |
| ↓ 下 | `Cmd+M` ウィンドウを最小化 | `End` |
| ← 左 | `Cmd+[` ブラウザ戻る | `Cmd+Q` アプリ終了 |
| → 右 | `Cmd+]` ブラウザ進む | `Cmd+W` タブ/ウィンドウを閉じる |

══════════════════════════════════════════════

## ◆ MOVEMENT PARAMETERS ── トラックボール → キー変換（アロープロファイル）

*特定のシンセシスでは、トラックボールの動きがキー入力へと変換される。剣技とは独立した力で、**動かし続ける限り連続入力**される。*

### ◆ PRIMARY FORMATION ── 通常プロファイル（arrows-profiles）

| レイヤー | 上 | 下 | 左 | 右 | one_shot | 備考 |
|---------|----|----|----|----|----------|------|
| 2 ARROW_SIGN | 選択↑ | 選択↓ | 選択← | 選択→ | なし | 自動リピートなし |
| 3 NUM | `↑` | `↓` | `←` | `→` | なし | 加速あり |
| 6 Bluetooth | `MissionCtrl` | `AppExpose` | `LANG2(英数)` | `LANG1(かな)` | あり | 斜め無効・余り有効 |

### ◆ ALT FORMATION ── Shift 同時押し時（arrows-alt-profiles）

| レイヤー | 上 | 下 | 左 | 右 | one_shot |
|---------|----|----|----|----|----------|
| 2 ARROW_SIGN | `Cmd+A` | `Cmd+V` | `Cmd+X` | `Cmd+C` | あり |
| 3 NUM | `Undo` | `Redo` | `BS` | `Del` | あり |
| 6 Bluetooth | Desktop左(F15) | Desktop右(F14) | Swapper逆(Cmd+Shift+Tab) | Swapper正(Cmd+Tab) | なし |

> **[ SYSTEM ]** **one_shot** — 有効時、センサーの動きに対してキーが 1 度だけ送出される。
> 押しっぱなし状態にはならない。連続入力が不要な操作に適用される。

### ◆ ACCELERATION SYSTEM ── 加速設定（Synthesis 03）

- 閾値を超えると最大 1/4 速度まで加速
- 初回入力から 250ms 後に連続入力開始、100ms 間隔でリピート

══════════════════════════════════════════════

## ◆ STATUS CRYSTAL REGISTRY ── LED カラー（レイヤーインジケーター）

*アクティブなシンセシスに応じてクリスタルの発光色が変化する。現在位置をフラクトライトに知らせるインジケーター。*

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

══════════════════════════════════════════════

## ◆ EQUIPPED MODULES ── 依存モジュール

*このシステムを支える仲間たち。一つでも欠ければ、剣技は発動しない。*

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

══════════════════════════════════════════════

## ◆ CHARACTER PARAMETERS ── 設定値サマリー

*フラクトライトの稼働を支える各種パラメータ。数値一つが安定と崩壊を分ける。*

### NERVE LINK STABILITY ── BLE・接続安定性

*ソウル・トランスレーターとホストを繋ぐ生命線。接続が切れれば、フラクトライトは消滅する。*

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
| BT_PERIPHERAL_PREF_MIN_INT | 6 (7.5ms) | R側 | 接続インターバル下限。前回MAX_INT=12固定は削除済み→今回は範囲指定で再試験 |
| BT_PERIPHERAL_PREF_MAX_INT | 12 (15ms) | R側 | 接続インターバル上限 |
| Insomnia pingInterval | 5秒 | R側のみ | keepaliveを高頻度化 |

### MOTION SENSOR CONFIG ── トラックボールセンサー（Elucidator.conf）

*センサーの挙動を制御するパラメータ。省電力モードへの移行速度を調整する。*

| 設定 | 値 | 効果 |
|------|----|------|
| PMW3610 REST移行時間 | 1000ms | 操作停止後すばやく省電力モードへ |

### THREAD STACK ── スレッドスタック（クラッシュ対策）

*システムの安定を支える根幹。スタックが尽きればフラクトライトは瞬く間に崩壊する。*

| 設定 | 値 | 対象 | 備考 |
|------|----|------|------|
| EC11スレッド | 4096 bytes | Dark_Repulser | |

══════════════════════════════════════════════

## ◆ SYSTEM LOG ── 変更履歴

*カーディナルシステムの監視下に刻まれた改変の記録。公理教会の管理する大図書館と同じく、ここに記されたものは永久に消えることはない。*

| 日付 | 内容 |
|------|------|
| 2026-04-05 | READMEをSAOスタイルに変更：剣技名をSAO実在剣技に統一（Sharp Nail / Vorpal Strike / The Eclipse / Howling Octave / Sonic Leap / Vertical Square / Starburst Stream / Horizontal） |
| 2026-04-05 | BT_PERIPHERAL_PREF_MIN_INT=6 / MAX_INT=12 を再追加（7.5〜15ms範囲指定）。前回は15ms固定でトラックボールに悪影響→今回は範囲指定で再試験。コミュニティ報告でBLE安定性向上事例あり |
| 2026-04-05 | シールド名を `Elucidator` / `Dark_Repulser` に変更（.uf2ファイル名・BLE名・シールドシンボル全て統一） |
| 2026-04-05 | 残存する旧名 KeyballBLE / keyball_gesture_led をすべて Recollection に統一（module.yml・CLAUDE.md・README・スクリプト・ワークスペースファイル） |
| 2026-04-05 | シールドファイル・ディレクトリを KeyballBLE → Recollection に完全リネーム |
| 2026-04-05 | `Recollection_R.conf` の `CONFIG_ZMK_KEYBOARD_NAME="KeyballBLE"` を削除: `.conf` の明示設定が `Kconfig.defconfig` の `Recollection` を上書きしていたため |
| 2026-04-05 | READMEタイトルを `Release_Recollection` に修正、残存 `KeyballBLE` 表記を修正 |
| 2026-04-05 | キーボード名を `KeyballBLE_R` / `KeyballBLE_L` から `Recollection` / `Recollection_L` に変更、リポジトリ名を `Release_Recollection` に変更 |
| 2026-03-31 | 32kHz内部クロック切替: CONFIG_CLOCK_CONTROL_NRF_K32SRC_SYNTH=y をR・L両側に追加。XIAO BLE外部水晶不安定によるBLE supervision timeout切断対策（ZMK公式推奨） |
| 2026-03-31 | insomnia再有効化: 無効化しても切断が発生したため原因でないと判断し復元 |
| 2026-03-31 | Split BLE接続パラメータ削除: SPLIT_BLE_PREF_LATENCY/TIMEOUTを削除しデフォルトに戻す。TIMEOUT=1000が左手スリープ後の自動再接続失敗を引き起こしていた可能性 |
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

══════════════════════════════════════════════

## ◆ INITIALIZATION PROTOCOL ── ビルド

*フラクトライトをアンダーワールドへ接続するための起動手順。カーディナルシステムが自動でビルドを執行する。*

> **[ CARDINAL ]** GitHub Actions により自動ビルド（`.github/workflows/build.yml`）。
> Push を契機に自動実行される。Artifacts から `.uf2` ファイルをダウンロードし、デバイスへ書き込むことで起動が完了する。
