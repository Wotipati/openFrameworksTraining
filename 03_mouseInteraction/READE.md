# 03_mouseInteraction

- マウス、キーボードを用いたインタラクションな操作の実装

![03_mouseinteraction_demo](https://user-images.githubusercontent.com/26996041/28864521-c4335956-77a7-11e7-8f17-3838564ec6c0.gif)

#### マウス位置の検出
- openFrameworksでは
  ```c++
  mouseX // 現在のマウスのx座標
  mouseY // 現在のマウスのy座標
  ```
  を取得できる

#### マウス操作の実装
- `ofApp.cpp`内の
  ```c++
  //--------------------------------------------------------------
  void ofApp::mouseMoved(int x, int y ){

  }

  //--------------------------------------------------------------
  void ofApp::mouseDragged(int x, int y, int button){

  }

  //--------------------------------------------------------------
  void ofApp::mousePressed(int x, int y, int button){

  }

  //--------------------------------------------------------------
  void ofApp::mouseReleased(int x, int y, int button){

  }
  ```
  の部分でマウスに関する設定を実装する

- 各種引数について
  ```c++
  int x,       // 現在のマウスのx座標
  int y,       // 現在のマウスのy座標
  int button   // 押されているボタンの種類
  ```
- `button`の種類
  - `0` : 左ボタン
  - `1` : 中ボタン
  - `2` : 右ボタン

#### キーボード操作の実装
- `ofApp.cpp`内の
  ```c++
  //--------------------------------------------------------------
  void ofApp::keyPressed(int key){

  }

  //--------------------------------------------------------------
  void ofApp::keyReleased(int key){

  }
  ```
  の部分でキーボードに関する設定を実装する

- 引数の`key`に押されたキーボードの種類が入る
- 使用例
  - エンターキーが押されると画面中央にパーティクルが生成される
    ```c++
      void ofApp::keyReleased(int key){
        if (key == OF_KEY_RETURN){
            ofPoint pos = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
            ofPoint speed = ofPoint(ofRandom(-5, 5), ofRandom(-5, 5));
            float radius = ofRandom(30, 50);
            ofVec3f color = ofVec3f(ofRandom(0, 200), ofRandom(80, 200), ofRandom(160, 255));

            Particle newParticle(pos, radius, speed, color, gravity);
            particles.push_back(newParticle);
        }
      }
    ```
- `key`のキャラクターコード
  - OF_KEY_HOME
  - OF_KEY_DEL
  - OF_KEY_ESC
  - OF_KEY_BACKSPACE
  - OF_KEY_RETURN
  - OF_KEY_TAB
  - OF_KEY_F1
  - OF_KEY_LEFT
  - OF_KEY_RIGHT
  - OF_KEY_UP
  - OF_KEY_DOWN
  - OF_KEY_SHIFT
  - OF_KEY_RIGHT_SHIFT
  - OF_KEY_LEFT_SHIFT
  - OF_KEY_COMMAND
  - OF_KEY_RIGHT_COMMAND
  - OF_KEY_LEFT_COMMAND
  - OF_KEY_CONTROL
  - OF_KEY_RIGHT_CONTROL
  - OF_KEY_LEFT_CONTROL
  - OF_RIGHT_ALT
  - OF_LEFT_ALT
  -
