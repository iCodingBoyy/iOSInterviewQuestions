//
//  AppReducer.swift
//  CombiningReducers
//
//  Created by Yilong Chen on 9/15/24.
//

import Foundation

func appReducer(
    _ state: AppState,
    _ action: Action
) -> AppState {
    
    var state = state
    state.restrooms = restroomsReducer(state.restrooms, action)
    return state
}
