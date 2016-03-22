//
//  EBSystemMain.swift
//  EBSystemStorage
//
//  Created by Egor Bedunkevich on 22.03.2016.
//  Copyright © 2016 Egor Bedunkevich. All rights reserved.
//

import Foundation

public class EBSystemStorage {
    
    //ACCESS KEYS
    var accessKey = String()
    
    var result: AnyObject?
    
    //SAVE TO DISK
    func saveObject(object: AnyObject?) {
        
        if object != nil {
            
            NSUserDefaults.standardUserDefaults().setObject(object, forKey: accessKey)
            NSLog("Object saved with the key: \(accessKey)")
        }
    }
    
    //FETCH OBJECT FROM DISK
    func requestAccess() {
        
        if accessKey.characters.count != 0 {
            
            self.result = NSUserDefaults.standardUserDefaults().objectForKey(accessKey)
            
            if let result = result {
                
                print(result)
            }
        }
    }
}