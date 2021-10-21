std::string add_binary(uint64_t a, uint64_t b) {
    string bin=bitset<64>(a+b).to_string();
    uint64_t x=bin.find_first_of('1',0);
    if(x>bin.length()){
        return "0";
    }
    return bin.substr(x);
}