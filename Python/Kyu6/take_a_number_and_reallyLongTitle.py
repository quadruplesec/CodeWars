def sum_dig_pow(a, b):
    eureka = []
    temporary_list = []
    for x in range(a, b+1): # runs through all the values within the input range
        x_len = str(x)
        new_x = x

        for i in range(len(x_len)): # goes through all the all the digits of the current number
            while new_x != 0:
                new_num = new_x % 10
                temporary_list.append(new_num)
                new_x = new_x // 10
            test_number = 0

            for y in range(len(temporary_list)):
                test_number += temporary_list[y]**(len(temporary_list) - y) # assembles the number you would get if you split the integer into digits, and raised each one to its
                                                                            # "corresponding power" (leftmost = 1, rightmost = number of total digits.) (organises digits into a list to...)
                                                                            # (...make this process easier.)

            if test_number == x:  # checks if number assembled above equals the original number. if so, adds to eureka list.
                eureka.append(x)
            test_number = 0
            temporary_list.clear()

    return eureka
