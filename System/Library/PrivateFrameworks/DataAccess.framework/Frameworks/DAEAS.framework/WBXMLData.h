/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface WBXMLData : NSObject {

	NSMutableData* _data;
	unsigned char _currentCodePage;
	BOOL _haveAppliedCurrentCodePage;
	NSMutableData* _stateStack;

}

@property (nonatomic,readonly) NSMutableData * data; 
-(id)init;
-(void)appendString:(id)arg1 ;
-(NSMutableData *)data;
-(void)appendData:(id)arg1 ;
-(void)switchToCodePage:(unsigned char)arg1 ;
-(void)openTag:(unsigned char)arg1 ;
-(void)appendTag:(unsigned char)arg1 withIntContent:(int)arg2 ;
-(void)appendTag:(unsigned char)arg1 withStringContent:(id)arg2 ;
-(void)closeTag:(unsigned char)arg1 ;
-(void)appendEmptyTag:(unsigned char)arg1 ;
-(void)_applyCurrentCodePage;
-(void)renderProspectiveTags;
-(void)appendInt:(int)arg1 ;
-(void)appendByteArrayData:(id)arg1 ;
-(id)dataExpectCompleteData:(BOOL)arg1 ;
-(unsigned char)currentCodePage;
-(void)openProspectiveTag:(unsigned char)arg1 ;
-(void)closeProspectiveTag:(unsigned char)arg1 ;
-(void)appendTag:(unsigned char)arg1 withStringContentAsData:(id)arg2 ;
-(void)appendTag:(unsigned char)arg1 withByteArrayDataContent:(id)arg2 ;
@end

