#include "/blockchain/blockchain.cpp"
#include "/configs/default.json"
#include "/instructions/instructions.cpp"
#include "/internet/internet.cpp"
#include "/nodefs/nodefs.cpp"
#include "/ui/ui.cpp"
#include "/wallet/wallet.cpp"


namespace _MAIN_ {
    
    int _INIT_() {
        
        _UI_.init();
        _NODEFileSystem_.init();
        _WALLET_.init(config["datas_path"["wallet_file"]]);
        _INTERNET_.init();
        _BLOCKCHAIN_.init();
        _INSTRUCTIONS_.init();
        
        if (peers.size() >= 32) {
            
            _INTERNET_.client0.connect(peers[0]);
            _INTERNET_.client1.connect(peers[1]);
            _INTERNET_.client2.connect(peers[2]);
            _INTERNET_.client3.connect(peers[3]);
            _INTERNET_.client4.connect(peers[4]);
            _INTERNET_.client5.connect(peers[5]);
            _INTERNET_.client6.connect(peers[6]);
            _INTERNET_.client7.connect(peers[7]);
            
        } else {
            
            for (peers.size()) {
                
                _INTERNET_.client
                
            };
            
        };
        
    };
    
}
