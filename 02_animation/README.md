# 02_animation

- アニメーションの描画
<br />
![02_animation](https://user-images.githubusercontent.com/26996041/28614081-750caac6-722f-11e7-97a2-8bddbccca131.gif)



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
    void update();  // パラメタの更新
    void draw();    // 描画

  private:
    ofPoint pos_;   // 中心の位置
    float radius_;  // 半径
    ofPoint speed_; // 速度
    ofVec3f color_; // 色
    float gravity_; // 重力加速度
  };
```
