/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject {

	BRCChecksummingOutputStream* _stream;

}

@property (nonatomic,readonly) NSData * signature; 
-(id)init;
-(void)done;
-(void)addItem:(id)arg1 ;
-(NSData *)signature;
@end

