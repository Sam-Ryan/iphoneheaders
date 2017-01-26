/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class TSWPCharacterStylePropertyChangeSet, TSSStyle, TSSStylePropertyChangeSet;

@interface TSWPStyleDiff : TSPObject {

	TSWPCharacterStylePropertyChangeSet* _changeSet;
	TSSStyle* _style;
	BOOL _definedChangeSet;
	BOOL _definedStyle;
	TSSStylePropertyChangeSet* _previouslyAppliedChangeSet;

}

@property (nonatomic,retain) TSSStyle * style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TSSStylePropertyChangeSet * previouslyAppliedChangeSet;              //@synthesize previouslyAppliedChangeSet=_previouslyAppliedChangeSet - In the implementation block
@property (nonatomic,retain) TSSStylePropertyChangeSet * changeSet;                               //@synthesize changeSet=_changeSet - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(StyleDiffArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const StyleDiffArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 changeSet:(id)arg2 ;
-(id)initWithContext:(id)arg1 style:(id)arg2 ;
-(id)styleDiffForTable:(int)arg1 storage:(id)arg2 currentObject:(id)arg3 ;
-(id)changedPropertyNames;
-(void)setPreviouslyAppliedChangeSet:(TSSStylePropertyChangeSet *)arg1 ;
-(BOOL)isEqualToStyleDiff:(id)arg1 ;
-(TSSStylePropertyChangeSet *)previouslyAppliedChangeSet;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSSStyle *)style;
-(void)setStyle:(TSSStyle *)arg1 ;
-(TSSStylePropertyChangeSet *)changeSet;
-(void)setChangeSet:(TSSStylePropertyChangeSet *)arg1 ;
@end

