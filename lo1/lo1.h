#ifndef LO1_H
#define LO1_H

bool should_count_chars(int argc, char* argv[]) {

    bool check = false;

    if (argc > 1 && argc < 3) {

        if(argv[1][0] == '-' && argv[1][1] == 'c') {
            check = true;
        }
    }

    return check;
}

bool is_space(char c) {

    bool check = false;

    if (c == ' ') {
        check = true;
    }

    return check;
}

#endif