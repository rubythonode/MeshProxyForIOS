//
//  ESPMeshLog.h
//  MeshProxy
//
//  Created by 白 桦 on 4/11/16.
//  Copyright © 2016 白 桦. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESPMeshLog : NSObject

+ (void) debug: (BOOL) isDebug Class: (Class) cls Message: (NSString *) message;

+ (void) info: (BOOL) isDebug Class: (Class) cls Message: (NSString *) message;

+ (void) warn: (BOOL) isDebug Class: (Class) cls Message: (NSString *) message;

+ (void) error: (BOOL) isDebug Class: (Class) cls Message: (NSString *) message;

@end
