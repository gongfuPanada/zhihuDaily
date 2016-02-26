//
//  SYCachedTool.h
//  zhihuDaily
//
//  Created by yang on 16/2/26.
//  Copyright © 2016年 yang. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface SYCacheTool : NSObject

+ (NSString *)queryStoryWithDateString:(NSString *)dateString;
+ (void)cacheStoryWithObject:(id)respObject;

+ (NSUInteger)cachedSize;

+ (NSUInteger)imageSize;

+ (NSUInteger)dataSize;

+ (void)clearCache;


@end