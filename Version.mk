##########################################################################
# Copyright (C) 2017-2020 Mono Wireless Inc. All Rights Reserved.
# Released under MW-SLA-*J,*E (MONO WIRELESS SOFTWARE LICENSE
# AGREEMENT).
##########################################################################

VERSION_MAIN = 2
VERSION_SUB  = 2
VERSION_VAR  = 4

# 2.2.4 MAX31855を都度電源を切ることを想定して、計測待ちをするように修正。
# 2.2.3 ADXL34xの低消費モードでデータが正しくない場合がある点を修正
# 2.2.2 BME280の計算式の問題を修正
# 2.2.1 細かいバグの修正
# 2.2.0 ビルドライブラリの更新
# 2.1.5 親機の出力形式にカンマ区切りを追加
# 2.1.4 SHT3x/SHTC3の対応
# 2.1.3 新ネットワーク方式に対応
# 2.1.2 DIモードにて複数入力、定期送信に対応
# 2.1.1 ADC 4ポート対応
# 2.1.0 ADXL34x FIFOモードの機能を修正。設定を16パターン保存できるように修正
# 2.0.2 複数センサ対応
# 2.0.1 Routerの接続先指定をできるように変更
# 2.0.0 プロジェクト名の変更
# 1.6.3 TWE-EH-SWINGに対応
# 1.6.2 ADXL34xのFIFOモードの追加
# 1.6.1 ADXL345のAirVolumeとLowEnergyモードの番号を変更
# 1.6.0 AirVolume機能を追加
# 1.5.4 BME280 対応、その他修正
# 1.5.3 ADXL345 シェイクモードの調整 FIFOの修正
# 1.5.2 ADXL345 シェイクモードの追加
# 1.5.1 省エネモードの追加
# 1.5.0 リモート設定機能を実装 TWE-Lite-2525Aのデフォルト送信先をApp_TweLiteに変更 ADXL345のモードを複数種選択可能
# 1.4.1 TWE-Lite 2525Aに対応 複数種のI2Cセンサに対応
# 1.4.0 TWX0003用に機能限定(SHT21のみ動作する 小サイズバイナリ)
# 1.3.8 書式モード出力で正しい値が出力されなかった
# 1.3.7 App_UART の RTS ピンの出力が動作していなかった
# 1.3.6 EndDevice_Remote(テスト実装)用に用意したParentからのMessagePoolの通信は、現時点では不要でありコメントアウト
# 1.3.5 ADT7410の温度計算の修正
# 1.3.4 LM61 の BIAS 設定の初期化が間違えている
# 1.3.3 マイナーバグフィックス
# 1.3.2 SDK 2014/06 の修正版での再ビルド
# 1.3.1 LIS3DH の動作不具合を修正
# 1.3.0 ソース公開版
# 1.2.7 初回リリース版
# 1.2.6 Parent: タイムスタンプ出力機能の追加, DOOR_TIMER: ドアを閉じたときにパケットが送られやすくした
# 1.2.5 Parent: UART 出力形式を追加
# 1.2.4 EndDevice Input: Standard で起床後にしばらく待ちを置く処理を追加 (DIO4 はLOに落ちてから、一定時間待つ)
# 1.2.3 EndDevice Input: DO3(DIO4) の出力が、起床時のみの問題を修正
# 1.2.2 ソースコードメンテ
# 1.2.1 UART 送信デモ対応, SimpleTagV3形式出力, B/O検出無効化
# 1.1.1 SHT21 センサー対応
# 1.0.1 ソースメンテナンス(EdInp)、暗号化の設定機能追加
# 0.9.3 App_UART の UART コマンド処理部を Interactive.c に移植（現時点ではコマンドは未定義）
# 0.9.2 ソースコードのメンテナンス, IO_TIMER を設定で有効に
# 0.9.1 IO_Timer 機能の追加(実験的)
# 0.9.0 Interactive モードの追加 (Parent/EndInp コンパイル確認まで)
# 0.8.2 Routerの動作確認、コメントなどのソース整備
# 0.8.1 消費電流の最適化、パケットのバイナリ化、ADC/PC/BATT測定 (Routerは未対応)
# 0.7.5 pcの測定機能 (enddevice_input)
# 0.7.4 ソースコードメンテナンス、メッセージプールのスロットテストコード追加
# 0.7.3 LCD表示の対応、Routerの送信遅延を設定した
# 0.7.2 暗号化対応確認 (ToCoNet 0.9.9 にて)
# 0.7.1 暗号化対応確認
# 0.6.1 ソースコードメンテナンス
# 0.6.0 子機の発報を親機に伝達後、メッセージプールに記録する
# 0.5.2 親機出力に送信元ルータアドレスを追加, 子機のローカルID(0-9)を設定可能にした
