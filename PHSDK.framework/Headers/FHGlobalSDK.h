//
//  FHGlobalSDK.h
//  PHSDK
//
//  Created by LYG on 2020/11/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM (NSUInteger,FHUSERSTATUS){
    FH_USERSTATUS_UNKNOW = 0,
    FH_USERSTATUS_ONLINE ,
    FH_USERSTATUS_OFFLINE ,
    FH_USERSTATUS_DESTROY ,//注销
    FH_USERSTATUS_ERROR,
};
@interface FHGlobalSDK : NSObject
/**
 获取SDK版本号
 */
+ (NSString*)fh_getVersion;
/**
 获取用户登录状态
 */
+ (FHUSERSTATUS)fh_getUserStatus;
/**
 */
+ (void)fh_applyCertByGlobal;
@end

NS_ASSUME_NONNULL_END
