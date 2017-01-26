/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplay, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplay* _display;
	unsigned long long _displayType;
	long long _backlightLevel;
	long long _interfaceOrientation;
	CGRect _bounds;
	CGRect _referenceBounds;

}

@property (nonatomic,retain) FBSDisplay * display;                         //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;               //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) long long displayBacklightLevel;              //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy) NSArray * elements;                             //@synthesize elements=_elements - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;               //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect referenceBounds;                     //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithElements:(id)arg1 ;
-(void)_sortElements;
-(void)removeElement:(id)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)interfaceOrientation;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(NSArray *)elements;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(FBSDisplay *)display;
-(unsigned long long)displayType;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(CGRect)referenceBounds;
-(void)setElements:(NSArray *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
-(void)finalizeLayout;
-(long long)displayBacklightLevel;
-(void)addElement:(id)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

