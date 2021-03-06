/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchiver.h>
#import <iWorkImport/TSPProxyObjectMappingProvider.h>

@protocol TSPProxyObjectMapping;
@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {

	id<TSPProxyObjectMapping> _proxyObjectMapping;

}

@property (assign,nonatomic,__weak) id<TSPProxyObjectMapping> proxyObjectMapping;              //@synthesize proxyObjectMapping=_proxyObjectMapping - In the implementation block
-(void)setStrongReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setWeakReference:(id)arg1 message:(Reference*)arg2 ;
-(BOOL)isForCopy;
-(void)setStrongLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setWeakLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(id<TSPProxyObjectMapping>)proxyObjectMapping;
-(void)setProxyObjectMapping:(id<TSPProxyObjectMapping>)arg1 ;
@end

