int evaluate_position(char board[8][8]) {
    int white_pieces = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board[i][j]) {
                case 'Q': white_pieces+=9; break;
                case 'R': white_pieces+=5; break;
                case 'B': white_pieces+=3; break;
                case 'N': white_pieces+=3; break;
                case 'P': white_pieces+=1; break;
                case 'q': white_pieces-=9; break;
                case 'r': white_pieces-=5; break;
                case 'b': white_pieces-=3; break;
                case 'n': white_pieces-=3; break;
                case 'p': white_pieces-=1; break;
                default: break;
            }
        }
    }
    return white_pieces;
}
