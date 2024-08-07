# Flappy Bird SDL Game

Đây là một phiên bản cài đặt đơn giản của game Flappy Bird sử dụng thư viện SDL2. Nhiệm vụ của người chơi là điều khiển flappy bird bay qua các ống mà không va chạm.

## Tính năng

1. Hiển thị điểm số tăng dần khi chơi
2. Màn hình gameover hiển thị điểm số và điểm cao
3. Restart game
4. Hiển thị hướng dẫn chơi khi bắt đầu game

## Cài đặt

Để chạy được chương trình game, bạn có thể làm theo các bước sau:

1. Clone repository về local machine.
2. Cài đặt SDL theo hướng dẫn trong tài liệu sau:
[SDL2 Documentation](https://lazyfoo.net/tutorials/SDL/01_hello_SDL/index.php)
3. Biên dịch game sử dụng file makefile, hãy tùy chỉnh file cho hợp lý với nơi bạn lưu file cài đặt thư viện.
```bash
mingw32-make
```
4. Chạy game
```bash
./flappybird
```

## Cách chơi
Nhấn phím Space để bắt đầu game và cho flappy bird nhảy qua các cột mà không va chạm. 
Điểm số tăng mỗi khi vượt qua được một cặp ống. Điểm cao nhất sẽ được ghi lại.
Khi gameover có thể nhấn phím Space hoặc kích chuột vào nút Play để chơi lại.

## Files
1. main.cpp: File chính chứa vòng lặp game và xử lý sự kiện.
    main.h: Khai báo global variables của game, hàm init game; load ảnh, âm thanh, font..
2. Base.h: Lưu các kích thước, vị trí.
2. Bird.cpp và Bird.h: Triển khai lớp Bird.
3. Pipe.cpp và Pipe.h: Triển khai lớp Pipe.
4. LTexture.cpp và LTexture.h: Triển khai lớp LTexture để xử lý các texture.
5. LButton.cpp và LButton.h: Triển khai lớp LButton để xử lý các nút bấm.
6. Render.cpp và Render.h: Các hàm render ra màn hình điểm số, bảng điểm...
7. Functions.cpp và Functions.h: Hàm check va chạm.
8. Makefile: Script build để biên dịch game.
9. score.txt: Tệp lưu điểm cao.


## Sources
[Images and sounds](https://kosresetr55.itch.io/flappy-bird-assets-by-kosresetr55)
[SDL Tutorials](https://lazyfoo.net/tutorials/SDL/)

