//
//  FHCaApi.h
//  PHSDK
//
//  Created by LYG on 2020/11/30.
//

#import <Foundation/Foundation.h>
#import <PHSDK/FHError.h>

NS_ASSUME_NONNULL_BEGIN

@interface FHCaApi : NSObject
/**
 证书的申请需要先生成密钥，密钥与证书一对一关联，密钥删除后证书也会删除，证书只能有一个，签名等接口使用到的密钥需与生成证书的密钥一致
 导出密钥:传入密钥模板导出密钥，用于手机端生成验证证书，只返回公钥
 kt : 密钥模版，现只有一种模式固定为11
 token : 登录获取的accessToken
 */
+ (void)fh_exportEccKeypairWithAccessToken:(NSString *)accessToken andkt:(NSString *)kt finish:(void(^)(id responseObject,FHError *error))result;

/**
 证书申请
 email : 邮箱地址
 beginTime : 有效期开始时间（格式为 yyyy-MM-dd）
 endTime : 有效期结束时间（格式为 yyyy-MM-dd）
 publicKey : 公钥（导出密钥api中获得）
 certType : 证书类型，传值SIGN
 token : 登录获取的accessToken
 */
+ (void)fh_applyCertWithAccessToken:(NSString *)accessToken andEmail:(NSString *)email andBeginTime:(NSString *)beginTime andEndTime:(NSString *)endTime andPublicKey:(NSString *)publicKey andCertType:(NSString *)certType finish:(void(^)(id responseObject,FHError *error))result;

/**
 可重复获取证书
 name : 用户名
 */
+ (void)fh_reApplyCertWithAccessToken:(NSString *)accessToken andName:(NSString *)name andEmail:(NSString *)email andBeginTime:(NSString *)beginTime andEndTime:(NSString *)endTime andPublicKey:(NSString *)publicKey andCertType:(NSString *)certType finish:(void(^)(id responseObject,FHError *error))result;

/**
 证书更新接口:证书更新，更新证书中秘钥长度
 certSn : 证书序列号
 publicKey : 公钥
 */
+ (void)fh_updateCertWithCertSn:(NSString*)certSn andPublicKey:(NSString *)publicKey finish:(void(^)(id responseObject,FHError *error))result;

/**
 证书变更:变更证书
 certSn : 证书序列号
 certDn : 证书DN
 */
+ (void)fh_changeCertWithCertSn:(NSString *)certSn andCertDn:(NSString *)certdn finish:(void(^)(id responseObject,FHError *error))result;

/**
 证书注销:使证书无效，注销后的证书无法恢复
 certSn : 证书序列号
 */
+ (void)fh_revokeCertWithCertSn:(NSString *)certSn finish:(void(^)(id responseObject,FHError *error))result;
@end

NS_ASSUME_NONNULL_END
