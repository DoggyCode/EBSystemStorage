//
//  EBSystemStorage.h
//  EBSystemStorage
//
//  Created by Egor Bedunkevich on 22.03.2016.
//  Copyright © 2016 Egor Bedunkevich. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EBSystemStorage.
FOUNDATION_EXPORT double EBSystemStorageVersionNumber;

//! Project version string for EBSystemStorage.
FOUNDATION_EXPORT const unsigned char EBSystemStorageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EBSystemStorage/PublicHeader.h>


/*
 class EBSystem {
 
 var accessKey = String()
 
 func synchronizeObject(item: AnyObject?) {
 
 if item != nil {
 
 NSUserDefaults.standardUserDefaults().setObject(item, forKey: accessKey)
 NSLog("Object saved with the key: \(accessKey)")
 }
 }
 
 func requestAccess() {
 
 if accessKey.characters.count != 0 {
 
 let result = NSUserDefaults.standardUserDefaults().objectForKey(accessKey)
 print(result!)
 }
 }
 }
*/