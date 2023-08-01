#include <iostream>
// #include <cstdlib>
#include <cstring>

using namespace std;


string hexToBinaryConv(string s){
    string ret;
    string t;
    int i;
    i =0;
    while(i<8){
        t = s[i];
        if(t =="0")
            ret = ret + "0000";
        if(t=="1")
            ret = ret + "0001";
        if(t=="2")
            ret = ret + "0010";
        if(t == "3")
            ret = ret + "0011";
        if(t=="4")
            ret = ret + "0100";
        if(t=="5")
            ret = ret +"0101";
        if(t=="6")
            ret = ret +"0110";
        if(t=="7")
            ret = ret +"0111";
        if(t=="8")
            ret = ret +"1000";
        if(t=="9")
            ret = ret +"1001";
        if(t=="A" || t =="a")
            ret = ret +"1010";
        if(t=="B" || t == "b")
            ret = ret +"1011";
        if(t=="C" || t == "c")
            ret = ret +"1100";
        if(t=="D" || t == "d")
            ret = ret +"1101";
        if(t=="E" || t == "e")
            ret = ret +"1110";
        if(t=="F" || t == "f")
            ret = ret +"1111";
        i++;
    }
    return ret;
}

// char to string converter
string f(char c){
    string ret;
    if(c == '0')
        ret = "0";
    if(c == '1')
        ret = "1";
    if(c == 'a')
        ret = "a";
    if(c == 'b')
        ret = "b";
    if(c == 'c')
        ret = "c";
    if(c == 'd')
        ret = "d";
    if(c == 'e')
        ret = "e";
    if(c == 'f')
        ret = "f";
    if(c == '-')
        return "-";
    return ret;
}

//converts char to int 
int g(char c){
    if(c == '0')
        return 0;
    if(c == '1')
        return 1;
    else 
        return 0;
}

//converts char to int and return its compliment

int h(char c){
    if(c == '0')
        return 1;
    if(c == '1')
        return 0;
    else 
        return 0;
}


//returns a^b
int power(int a, int b){
    int c = 1;
    while(b--){
        c = c*a;
    }
    return c;
}



string addRegToAssemblyLine(string s){
    string t,ret;
    t = s;
        if(t=="00000")
            ret = ret +"x0, ";
        if(t=="00001")
            ret = ret +"x1, ";
        if(t=="00010")
            ret = ret +"x2, ";
        if(t=="00011")
            ret = ret +"x3, ";
        if(t=="00100")
            ret = ret +"x4, ";
        if(t=="00101")
            ret = ret +"x5, ";
        if(t=="00110")
            ret = ret +"x6, ";
        if(t=="00111")
            ret = ret +"x7, ";
        if(t=="01000")
            ret = ret +"x8, ";
        if(t=="01001")
            ret = ret +"x9, ";
        if(t=="01010")
            ret = ret +"x10, ";
        if(t=="01011")
            ret = ret +"x11, ";
        if(t=="01100")
            ret = ret +"x12, ";
        if(t=="01101")
            ret = ret +"x13, ";
        if(t=="01110")
            ret = ret +"x14, ";
        if(t=="01111")
            ret = ret +"x15, ";
        if(t=="10000")
            ret = ret +"x16, ";
        if(t=="10001")
            ret = ret +"x17, ";
        if(t=="10010")
            ret = ret +"x18, ";
        if(t=="10011")
            ret = ret +"x19, ";
        if(t=="10100")
            ret = ret +"x20, ";
        if(t=="10101")
            ret = ret +"x21, ";
        if(t=="10110")
            ret = ret +"x22, ";
        if(t=="10111")
            ret = ret +"x23, ";
        if(t=="11000")
            ret = ret +"x24, ";
        if(t=="11001")
            ret = ret +"x25, ";
        if(t=="11010")
            ret = ret +"x26, ";
        if(t=="11011")
            ret = ret +"x27, ";
        if(t=="11100")
            ret = ret +"x28, ";
        if(t=="11101")
            ret = ret +"x29, ";
        if(t=="11110")
            ret = ret +"x30, ";
        if(t=="11111")
            ret = ret +"x31, ";
    return ret;
}

string addEndRegToAssemblyLine(string s){
    string t,ret;
    t = s;
        if(t=="00000")
            ret = ret +"x0";
        if(t=="00001")
            ret = ret +"x1";
        if(t=="00010")
            ret = ret +"x2";
        if(t=="00011")
            ret = ret +"x3";
        if(t=="00100")
            ret = ret +"x4";
        if(t=="00101")
            ret = ret +"x5";
        if(t=="00110")
            ret = ret +"x6";
        if(t=="00111")
            ret = ret +"x7";
        if(t=="01000")
            ret = ret +"x8";
        if(t=="01001")
            ret = ret +"x9";
        if(t=="01010")
            ret = ret +"x10";
        if(t=="01011")
            ret = ret +"x11";
        if(t=="01100")
            ret = ret +"x12";
        if(t=="01101")
            ret = ret +"x13";
        if(t=="01110")
            ret = ret +"x14";
        if(t=="01111")
            ret = ret +"x15";
        if(t=="10000")
            ret = ret +"x16";
        if(t=="10001")
            ret = ret +"x17";
        if(t=="10010")
            ret = ret +"x18";
        if(t=="10011")
            ret = ret +"x19";
        if(t=="10100")
            ret = ret +"x20";
        if(t=="10101")
            ret = ret +"x21";
        if(t=="10110")
            ret = ret +"x22";
        if(t=="10111")
            ret = ret +"x23";
        if(t=="11000")
            ret = ret +"x24";
        if(t=="11001")
            ret = ret +"x25";
        if(t=="11010")
            ret = ret +"x26";
        if(t=="11011")
            ret = ret +"x27";
        if(t=="11100")
            ret = ret +"x28";
        if(t=="11101")
            ret = ret +"x29";
        if(t=="11110")
            ret = ret +"x30";
        if(t=="11111")
            ret = ret +"x31";
    return ret;
}



string binaryToAssemblyConv(string s,string shex){
    string opcode,ret;
    string A;
    

    opcode = f(s[25]) + f(s[26]) + f(s[27]) + f(s[28]) + f(s[29]) + f(s[30]) + f(s[31]);

    //R-type
    
    if( opcode == "0110011"){

        string funct7;
        funct7 = f(s[0]) + f(s[1]) + f(s[2]) + f(s[3]) + f(s[4]) + f(s[5]) + f(s[6]);
        string funct3;
        funct3 = f(s[17]) +f(s[18]) + f(s[19]);
        string rs2;
        rs2 = f(s[7]) + f(s[8]) + f(s[9]) + f(s[10]) + f(s[11]);
        string rs1;
        rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);

        if(funct7 == "0000000"){
            if(funct3 == "000")
                ret = ret + "add ";
            if(funct3 == "001")
                ret = ret + "sll ";
            if(funct3 == "010")
                ret = ret + "slt ";
            if(funct3 == "011")
                ret = ret + "sltu ";
            if(funct3 == "100")
                ret = ret + "xor ";
            if(funct3 == "101")
                ret = ret + "srl ";          
            if(funct3 == "110")
                ret = ret + "or ";
            if(funct3 == "111")
                ret = ret + "and ";
        }
        else if(funct7 == "0100000"){
            if(funct3 == "000")
                ret = ret + "sub ";
            if(funct3 == "101")
                ret = ret + "sra ";
        }
        else{
            cout << "invalid instruction" << endl;
        }

        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        t = addRegToAssemblyLine(rs1);
        ret = ret + t;
        t = addEndRegToAssemblyLine(rs2);
        ret = ret + t;

        cout << ret << endl;

    }

    // I- Type


    else if(opcode == "0010011"){
        string rs1;
        rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
        string funct3;
        funct3 = f(s[17]) +f(s[18]) + f(s[19]);
        string funct7;
        funct7 =  f(s[5]) + f(s[4]) + f(s[3]) + f(s[2]) + f(s[1]) + f(s[0]);


        int immed;

        //adjusting the imm[11:0] for srai since one bit will be 1
        if(funct3 == "101" && funct7 != "000000"){
            s[1] = '0';
        }


        if(s[0]=='0'){
            immed = 2048*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                    64*g(s[5]) + 32*g(s[6]) + 16*g(s[7]) + 8*g(s[8]) + 4*g(s[9]) + 2*g(s[10]) + g(s[11]);
        }
        else if(s[0] == '1'){
            immed = 2048*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[7]) + 8*h(s[8]) + 4*h(s[9]) + 2*h(s[10]) + h(s[11]) + 1;
            immed = 0 - immed;
        }

        


        if(funct3 == "000")
            ret +=  "addi ";
        else if(funct3 == "001"){
            if(funct7 == "000000")
                ret += "slli ";
        }
        else if(funct3 == "010")
            ret += "slti ";
        else if(funct3 == "011")
            ret += "sltiu ";
        else if(funct3 == "100")
            ret += "xori ";
        else if(funct3 == "101"){
            if(funct7 == "000000")
                ret += "srli ";
            else
                ret += "srai ";
        }
        else if(funct3 == "110")
            ret += "ori ";
        else if(funct3 == "111")
            ret += "andi ";
        else{
            cout << "invalid instruction" << endl;
        }
        
        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        t = addRegToAssemblyLine(rs1);
        ret = ret + t;
        cout << ret;
        cout << immed << endl;

    }

    // I- Type loading 


    else if(opcode =="0000011"){
        string rs1;
        rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
        string funct3;
        funct3 = f(s[17]) +f(s[18]) + f(s[19]);


        int immed;
        if(s[0]=='0'){
            immed = 2048*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                    64*g(s[5]) + 32*g(s[6]) + 16*g(s[7]) + 8*g(s[8]) + 4*g(s[9]) + 2*g(s[10]) + g(s[11]);
        }
        else if(s[0] == '1'){
            immed = 2048*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[7]) + 8*h(s[8]) + 4*h(s[9]) + 2*h(s[10]) + h(s[11]) + 1;
            immed = 0 - immed;
        }

        if(funct3 == "000")
            ret += "lb ";
        else if(funct3 == "001")
            ret += "lh ";
        else if(funct3 == "010")
            ret += "lw ";
        else if(funct3 == "011")
            ret += "ld ";
        else if(funct3 == "100")
            ret += "lbu ";
        else if(funct3 == "101")
            ret += "lhu ";
        else if(funct3 == "110")
            ret += "lwu ";
        else {
            cout << "invalid instruction" << endl;
        }
        
        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        cout << ret;
        cout << immed;
        t = addEndRegToAssemblyLine(rs1);
        t = "(" + t + ")";
        ret = ret + t;
        cout << t << endl;

    }

    // S-Type storing

    else if(opcode == "0100011"){

        string funct3;
        funct3 = f(s[17]) +f(s[18]) + f(s[19]);
        string rs2;
        rs2 = f(s[7]) + f(s[8]) + f(s[9]) + f(s[10]) + f(s[11]);
        string rs1;
        rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);


        int immed;
        if(s[0]=='0'){
            immed = 2048*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                    64*g(s[5]) + 32*g(s[6]) + 16*g(s[20]) + 8*g(s[21]) + 4*g(s[22]) + 2*g(s[23]) + g(s[24]);
        }
        else if(s[0] == '1'){
            immed = 2048*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[20]) + 8*h(s[21]) + 4*h(s[22]) + 2*h(s[23]) + h(s[24]) + 1;
            immed = 0 - immed;
        }


        if(funct3 == "000")
            ret = ret + "sb ";
        else if(funct3 == "001")
            ret = ret + "sh ";
        else if(funct3 == "010")
            ret = ret + "sw ";
        else if(funct3 == "011")
            ret = ret + "sd ";
        else {
            cout << "invalid instruction" << endl; 
        }
        
        string t;
        t = addRegToAssemblyLine(rs2);
        ret += t;
        cout << ret;
        cout << immed;
        t = addEndRegToAssemblyLine(rs1);
        t = "(" + t + ")";
        ret = ret + t;
        cout << t << endl;




    }

    else if(opcode == "1100111"){
        string rs1;
        rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
        string funct3;
        funct3 = f(s[17]) +f(s[18]) + f(s[19]);
        string funct7;
        funct7 =  f(s[5]) + f(s[4]) + f(s[3]) + f(s[2]) + f(s[1]) + f(s[0]);

        int immed;
        if(s[0]=='0'){
            immed = 2048*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                    64*g(s[5]) + 32*g(s[6]) + 16*g(s[7]) + 8*g(s[8]) + 4*g(s[9]) + 2*g(s[10]) + g(s[11]);
        }
        else if(s[0] == '1'){
            immed = 2048*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[7]) + 8*h(s[8]) + 4*h(s[9]) + 2*h(s[10]) + h(s[11]) + 1;
            immed = 0 - immed;
        }

        ret = ret + "jalr ";
        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        t = addRegToAssemblyLine(rs1);
        ret = ret + t;
        cout << ret;
        cout << immed << endl;





    }
    // U-Type


    else if(opcode == "0110111"){
        string imm;
        imm =  "0x" + f(shex[0]) + f(shex[1]) + f(shex[2]) + f(shex[3]) + f(shex[4])  ;
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
        ret = ret + "lui ";
        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        ret = ret + imm;
        cout << ret << endl;

    }

    // U- Type2
    else if(opcode == "0010111"){
        string imm;
        imm =  "0x" + f(shex[0]) + f(shex[1]) + f(shex[2]) + f(shex[3]) + f(shex[4])  ;
        string rd;
        rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
        ret = ret + "auipc ";
        string t;
        t = addRegToAssemblyLine(rd);
        ret = ret + t;
        ret = ret + imm;
        cout << ret << endl;

    }

    else{
        cout << "invalid instruction" << endl;
    }



    

    
    return ret;
    
}

int main(){
    int k = 0;
    int i,j,offset,m;    
    bool b,c; 
    string opcode;
    m =0;
    string s;



    string arrStrings[100];
    string binStrings[100];
    int arr[50];
    
    for(i=0;i<50;i++){
        arr[i] = 0;
    }


    while(true){
        getline(cin,s);
        if(f(s[0]) + f(s[1]) == "-1"){
            break;
        }
        arrStrings[k] = s;
        k++;
    }

    int l = k/2;
    
   
    for(i=0;i<k;i++){
        binStrings[i] = hexToBinaryConv(arrStrings[i]);
    }

    for(i=0;i<k;i++){
        s = binStrings[i];
        opcode = f(s[25]) + f(s[26]) + f(s[27]) + f(s[28]) + f(s[29]) + f(s[30]) + f(s[31]);
        if(opcode == "1100011" && s[0] == '0'){
            offset = 4096*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                      64*g(s[5]) + 32*g(s[6]) + 16*g(s[20]) + 8*g(s[21]) + 4*g(s[22]) + 2*g(s[23]) + 2048*g(s[24]);
            int c = i + (offset/4);
            if(c<k){
                b = false;
                for(j=0; j < l; j++){
                    if(c == arr[j]){
                        b = true;
                    break;
                    }
                }
                if(b != true){
                    arr[m] = c;
                    m++;
                }
            }
        }
        if(opcode == "1101111" && s[0] == '0'){
            offset = power(2,20)*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                     64*g(s[5]) + 32*g(s[6]) + 16*g(s[7]) + 8*g(s[8]) + 4*g(s[9]) + 2*g(s[10]) + 2048*g(s[11]) +
                     power(2,19)*g(s[12]) + power(2,18)*g(s[13]) + power(2,17)*g(s[14]) + power(2,16)*g(s[15]) +
                     power(2,15)*g(s[16]) + power(2,14)*g(s[17]) + power(2,13)*g(s[18]) + power(2,12)*g(s[19]);
            int c = i + (offset/4);
            if(c<k){
                b = false;
                for(j=0; j < l; j++){
                    if(c == arr[j]){
                        b = true;
                    break;
                    }
                }
                if(b != true){
                    arr[m] = c;
                    m++;
                }
            }

        }
        

    }
    
    for(i=0;i<k;i++){
        s = binStrings[i];
        opcode = f(s[25]) + f(s[26]) + f(s[27]) + f(s[28]) + f(s[29]) + f(s[30]) + f(s[31]);
        c = false;
            for(j=0;j<l;j++){
                if(i == arr[j]){
                    c = true;
                    break;
                }
            }
            if(c && i !=0){
                cout << "L";
                cout << j + 1;
                cout << " : " << endl;
            }
        if(opcode == "1100011" && s[0] == '0'){
            string ret;
            string funct3;
            funct3 = f(s[17]) +f(s[18]) + f(s[19]);
            string rs2;
            rs2 = f(s[7]) + f(s[8]) + f(s[9]) + f(s[10]) + f(s[11]);
            string rs1;
            rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
            offset = 4096*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                     64*g(s[5]) + 32*g(s[6]) + 16*g(s[20]) + 8*g(s[21]) + 4*g(s[22]) + 2*g(s[23]) + 2048*g(s[24]);
            if(funct3 == "000")
                ret = ret + "beq ";
            else if(funct3 == "001")
                ret = ret + "bne ";
            else if(funct3 == "100")
                ret = ret + "blt ";
            else if(funct3 == "101")
                ret = ret + "bge ";
            else if(funct3 == "110")
                ret = ret + "bltu ";
            else if(funct3 == "111")
                ret = ret + "bgeu ";
            else {
                cout << "invalid instruction" << endl;
            }

            string t;
            t = addRegToAssemblyLine(rs1);
            ret = ret + t;
            t = addRegToAssemblyLine(rs2);
            ret = ret + t;

            int c = i + (offset/4);
            if(c < k){
                for(j=0;j < l;j++){
                    if(c == arr[j])
                        break;
                }
                cout << ret + "L";
                cout << j+1 << endl;
            }else{
                cout << "offset is off limits" << endl;
            }
                         
        }else if (opcode == "1100011" && s[0] == '1'){
            string ret;
            string funct3;
            funct3 = f(s[17]) +f(s[18]) + f(s[19]);
            string rs2;
            rs2 = f(s[7]) + f(s[8]) + f(s[9]) + f(s[10]) + f(s[11]);
            string rs1;
            rs1 =  f(s[12]) + f(s[13]) + f(s[14]) + f(s[15]) + f(s[16]);
            offset = 4096*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[20]) + 8*h(s[21]) + 4*h(s[22]) + 2*h(s[23]) + 2048*h(s[24]) + 2;
            if(offset > 4*i){
                cout << "offset is off limits" << endl;
            }else {
                offset = 0 - offset;
                if(funct3 == "000")
                    ret = ret + "beq ";
                else if(funct3 == "001")
                    ret = ret + "bne ";
                else if(funct3 == "100")
                    ret = ret + "blt ";
                else if(funct3 == "101")
                    ret = ret + "bge ";
                else if(funct3 == "110")
                    ret = ret + "bltu ";
                else if(funct3 == "111")
                    ret = ret + "bgeu ";
                else {
                    cout << "invalid instruction" << endl;
                }
        
                string t;
                t = addRegToAssemblyLine(rs1);
                ret = ret + t;
                t = addRegToAssemblyLine(rs2);
                ret = ret + t;
                cout << ret;
                cout << offset << endl;

            }
        }
        else if(opcode == "1101111" && s[0] == '0'){
            string ret;
            string rd;
            rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
            offset = power(2,20)*g(s[0]) + 1024*g(s[1]) + 512*g(s[2]) + 256*g(s[3]) + 128*g(s[4]) + 
                     64*g(s[5]) + 32*g(s[6]) + 16*g(s[7]) + 8*g(s[8]) + 4*g(s[9]) + 2*g(s[10]) + 2048*g(s[11]) +
                     power(2,19)*g(s[12]) + power(2,18)*g(s[13]) + power(2,17)*g(s[14]) + power(2,16)*g(s[15]) +
                     power(2,15)*g(s[16]) + power(2,14)*g(s[17]) + power(2,13)*g(s[18]) + power(2,12)*g(s[19]);
            
            int c = i + (offset/4);
            if(c<k){
                for(j=0;j < l;j++){
                    if(c == arr[j])
                        break;
                }
                ret = ret + "jal ";
                string t;
                t = addRegToAssemblyLine(rd);
                ret = ret + t;
                cout << ret + "L";
                cout << j+1 << endl;
            }else{
                cout << "offset is off limits" << endl;
            }

        }
        else if(opcode == "1101111" && s[0] == '1'){
            string ret;
            string rd;
            rd = f(s[20]) + f(s[21]) + f(s[22]) + f(s[23]) + f(s[24]);
            offset = power(2,20)*h(s[0]) + 1024*h(s[1]) + 512*h(s[2]) + 256*h(s[3]) + 128*h(s[4]) + 
                    64*h(s[5]) + 32*h(s[6]) + 16*h(s[7]) + 8*g(s[8]) + 4*h(s[9]) + 2*h(s[10]) + 2048*h(s[11]) +
                    power(2,19)*h(s[12]) + power(2,18)*h(s[13]) + power(2,17)*h(s[14]) + power(2,16)*h(s[15]) +
                    power(2,15)*h(s[16]) + power(2,14)*h(s[17]) + power(2,13)*h(s[18]) + power(2,12)*h(s[19]) + 1 + 9;
            if(offset > 4*i){
                cout << "offset is off limits" << endl;
            }else{
                offset = 0 - offset;
            }
            ret = ret + "jal ";
            string t;
            t = addRegToAssemblyLine(rd);
            ret = ret + t;
            cout << ret;
            cout << offset << endl; 

        }
        else{
            s = binaryToAssemblyConv(s,arrStrings[i]);
        }
        
    }


    return 0;
}