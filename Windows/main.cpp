#include <list>
#include <string>

#include "blockchain/blockchain.cpp"
#include "config/config.cpp"
#include "instructions/instructions.cpp"
#include "internet/internet.cpp"
#include "nodefs/nodefs.cpp"
#include "ui/ui.cpp"
#include "wallet/wallet.cpp"

namespace MAIN {
    
    function find_available_peers(int peers_list) {
        
        unsigned short int reps = 0;
        string available_peers = [];
        
        _INTERNET_.btclient.connect(peers[0]);
        _INTERNET_.btclient.send("{'datas': 'how much peers do you have ?'}")
        
        if (peers_list >= 32) {
            
            for (reps < peers_list.size()) {
                
                _INTERNET_.btclient.connect();
                _INTERNET_.btclient.send();
                if (_INTERNET_.btclient.recv() == "{'datas': 'im available'}") {
                    
                    available_peers.append(peers_list[(reps)]);
                    
                };
                
            };
            return ()
            
        } else {
            
            
            
        };
        
    }
    
    int init() {
        
        _THREADING_.init();
        _UI_.init();
        _NODEFileSystem_.init();
        _WALLET_.init(config["datas_path"["wallet_file"]]);
        _INTERNET_.init();
        _BLOCKCHAIN_.init();
        _INSTRUCTIONS_.init();
        
        if (peers.size() >= 32) {
            
            find_available_peers(peers);
            
        } else {
            
            
            
        };
        
    };
    
}
