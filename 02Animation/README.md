# 02Animation

- アニメーションの描画  

![02animation](https://user-images.githubusercontent.com/26996041/28614294-48414668-7230-11e7-9353-6e2098ca31d5.gif)



#### アニメーションの描画流れ
##### 1. FPSの設定
- `setup()`内で行う

      ofSetFrameRate("FPS値");

##### 2. `update()`の記述
- アニメーションさせる物体の各パラメータを更新する

##### 3. 描画
- `update()`で更新した内容で描画する

---
#### クラスの設計
- `class Particle`を設計

```c++
  class Particle{
  public:
    Particle(ofPoint, float, ofPoint, ofVec3f, float);  // コンストラクタ
    void update();      // パラメタの更新
    void draw();        // 描画
    ofPoint getPos();   // 中心座標の取得
    float getRadius();  // 半径の取得
    ofPoint getSpeed(); // 速度の取得
    ofVec3f getColor(); // 色の取得

  private:
    ofPoint pos_;   // 中心の位置
    float radius_;  // 半径
    ofPoint speed_; // 速度
    ofVec3f color_; // 色
    float gravity_; // 重力加速度
  };
```
