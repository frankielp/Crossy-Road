#include "header/header.h"
// void SubThread()
// {
//     while (IS_RUNNING) {
//         if (!cg.getPeople().isDead()) //Nếu người vẫn còn sống
//         {
//             cg.updatePosPeople(MOVING);//Cập nhật vị trí người theo thông tin từ main
//         }
//         MOVING = ' ';// Tạm khóa không cho di chuyển, chờ nhận phím từ hàm main
//         cg.updatePosVehicle();//Cập nhật vị trí xe
//         cg.updatePosAnimal(); //Cập nhật vị trí thú
//         cg.drawGame();
//         if (cg.getPeople().isImpact(cg.getVehicle() ||
//             cg.getPeople().isImpact(cg.getAnimal())
//         {
//             // Xử lý khi đụng xe hay thú
//         }
//         if (cg.getPeople().isFinish()){
//             // Xử lý khi về đích
//         }
//         Sleep(100);
//     }
// }