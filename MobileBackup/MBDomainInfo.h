/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_domainName;
    unsigned long long _localSize;
    unsigned long long _remoteSize;
    BOOL _enabled;
    BOOL _systemApp;
    BOOL _restricted;
}

+ (id)domainInfoWithName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6;
+ (id)domainNameForBundleID:(id)arg1;
@property(nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(nonatomic, getter=isSystemApp) BOOL systemApp; // @synthesize systemApp=_systemApp;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long remoteSize; // @synthesize remoteSize=_remoteSize;
@property(nonatomic) unsigned long long localSize; // @synthesize localSize=_localSize;
@property(retain, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;
@property(readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6;

@end
