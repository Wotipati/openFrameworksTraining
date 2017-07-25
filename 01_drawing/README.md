# 01_drawing

- oFに慣れよう  
- 色々な図形の描画方法について  
<br />
<img width="350" alt="2017-07-25 21 56 21" src="https://user-images.githubusercontent.com/26996041/28573064-437a62a6-7184-11e7-81cc-157f28a5a805.png">


---
#### oFに含まれる3つの重要なファイル
- main.cpp  
  - プロジェクト全体の起点となるファイル
  - 画面のサイズをここで設定する


- ofApp.h
  - アプリケーションのヘッダファイル


- ofApp.cpp
  - アプリケーションの処理の内容を記述する部分

---
#### ofApp.cppの内容
- `ofApp::setup()` : 初期化関数
  - プログラムを実行した際に一度だけ実行される関数
  - プログラム全体に関する基本設定を行う
  - FPS、背景色、外部データのロードなどを行う


- `ofApp::update()` : メインループ関数
  - `setup()`で指定したFPSに従って繰り返し実行される
  - `update()`は`draw()`の前に実行され、プログラムに記憶された値を更新する際に使用される


- `ofApp::draw()` : 描画関数
  - `setup()`で指定したFPSに従って繰り返し実行される
  - 画面の描画に関する命令を実行する


---
#### 色の設定
##### 背景色の設定
- `ofBackground()`を用いて行う  
- `setup()`関数の中で行う
- 引数としてRGBで色の指定を行う  

      ofBackground("R", "G", "B");


##### 描画色の設定
- `ofSetColor()`を用いて行う
- `ofSetColor()`で色を指定するとそれ以降で描いた図形が指定した色で塗る潰される
- `setup()`で指定すると、`draw()`に描いた全ての図形に適用される

      ofSetColor("R", "G", "B");


##### 透過度の不可
- `ofSetColor()`の4つ目の引数で0〜255の範囲で設定できる
- `ofEnableAlphaBlending()`関数を呼び出すと、それ以降でアルファチャンネルが使用可能になる
- 通常`ofEnableAlphaBlending()`は`setup()`で設定する
---

### 図形の描画
openFrameworksでは座標軸は画面の左上を原点に、横の位置をx座標で、縦の位置をy座標で表す

##### 線の描画

      ofDrawLine("始点のx座標", "視点のy座標", "終点のx座標", "終点のy座標");


##### 四角形の描画

      ofDrawRectangle("左上のx座標", "左上のy座標", "width", "height");


##### 三角形の描画

      ofDrawTriangle("点1のx座標", "点1のy座標", "点2のx座標", "点2のy座標", "点3のx座標", "点3のy座標")；


##### 円の描画
- 事前に`setup()`内で、`ofSetCircleResolution`というメソッドを用いて円の精密度を設定する
- この設定を忘れると、円がカクカクしたものになる
- 楕円の描画時に於いても同様に`ofSetCircleResolution`でその精密度が設定される

      ofDrawCircle("中心のx座標", ”中心のy座標", "半径");


##### 楕円の描画

      ofDrawEllipse("中心のx座標", ”中心のy座標", "width", "height");


---

### その他の基本的な関数

##### 画面の幅と高さを取得する
画面の高さを返す

      ofGetWidth();

画面の幅を返す

      ofGetHeight();


##### 乱数の設定
- 指定した範囲内で乱数を生成する

      ofRandom("最大値", "最小値");
