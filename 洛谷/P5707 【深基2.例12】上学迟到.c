#include <stdio.h>  
  
int main() {  
    int s, v;  
    scanf("%d %d", &s, &v);  
  
    // 计算所需行走时间（向上取整到分钟）  
    int travel_time = (s + v - 1) / v; // 使用整数除法向上取整的技巧  
  
    // 总时间包括行走时间和额外的10分钟  
    int total_time = travel_time + 10;  
  
    // 学校要求的到达时间（上午8:00，转换为分钟）  
    int school_time = 8 * 60;  
  
    // 计算最晚出发时间（从午夜00:00开始计算，分钟数）  
    int latest_departure_minutes = school_time - total_time;  
  
    // 如果最晚出发时间在午夜之前（即小于0），则调整为前一天的23点xx分  
    // 但由于题目说明提前时间不会超过一天，这里实际上不会发生（因为school_time是固定的8:00）  
    // 所以这行代码实际上不会被执行，但为了严谨性还是保留  
    if (latest_departure_minutes < 0) {  
        latest_departure_minutes += 24 * 60; // 调整为前一天的时间（但在这个问题中不需要）  
    }  
  
    // 转换为小时和分钟  
    int hour = latest_departure_minutes / 60;  
    int minute = latest_departure_minutes % 60;  
  
    // 输出格式化的时间  
    printf("%02d:%02d\n", hour, minute);  
  
    return 0;  
}