//
//  BestFirstFinder.h
//  PathFindingForObjC-Example
//
//  Created by JasioWoo on 14/10/31.
//  Copyright (c) 2014年 JasioWoo. All rights reserved.
//

#import "AStarFinder.h"

/**
 * Best-First-Search path-finder.
 * @constructor
 * @extends AStarFinder
 * @param {object} opt
 * @param {boolean} opt.allowDiagonal Whether diagonal movement is allowed.
 * @param {boolean} opt.dontCrossCorners Disallow diagonal movement touching block corners.
 * @param {function} opt.heuristic Heuristic function to estimate the distance
 *     (defaults to manhattan).
 */
@interface BestFirstFinder : AStarFinder

@end