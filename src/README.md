+ File mình chạy là kafebot_navigation.launch nằm trong package kafebot_navigation

+ Source costmap layer: costmap_2d -> plugins -> source code của các layer (trong đó obstacle_layer.cpp chứa phần nhận dữ liệu sensor)

Lệnh chạy:

		roslaunch kafebot_navigation kafebot_navigation.launch

=====================================================

1) Chỉ đường cho con robot đi từ A->B (start, goal)
+) Robot xác định đường đi từ start đến goal nằm trong package navfn (Đây là global planner) sử dụng thuật toán dijkstra

2) Tương tác ngoại cảnh (map với vật thể)
+) Tương tác ngoại cảnh map với vật thể (Theo em hiểu đó là nhận biết được vật cản xung quanh robot)
	-> Phần nhận biết vật cản xung quanh robot là nhận từ dữ liệu sensor để cập nhật vào costmap (cụ thể nằm trong file obstacle_layer.cpp từ dòng 121)

3) Điều chỉnh lại đường đi khi đi sai đường?
+) Về câu hỏi này thì robot không biết được nó đang đi sai đường không. Robot sẽ nhận vị trí, hướng, vận tốc hiện tại để chọn ra vận tốc phù hợp nhất để đi đến đích
+) Package sử dụng là dwa_local_planner các tiêu chí đánh giá từ 170->176 file dwa_planner.cpp

