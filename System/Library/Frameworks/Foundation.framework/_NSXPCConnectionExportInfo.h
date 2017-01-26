/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCInterface;

@interface _NSXPCConnectionExportInfo : NSObject {

	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	long long _exportCount;

}

@property (retain) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign) long long exportCount;                           //@synthesize exportCount=_exportCount - In the implementation block
-(id)exportedObject;
-(long long)exportCount;
-(void)setExportCount:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSXPCInterface *)exportedInterface;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
@end

