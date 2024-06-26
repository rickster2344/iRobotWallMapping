// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot1_interfaces:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__BUILDER_HPP_
#define ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot1_interfaces/action/detail/teleop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_Goal_target_direction
{
public:
  Init_Teleop_Goal_target_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot1_interfaces::action::Teleop_Goal target_direction(::robot1_interfaces::action::Teleop_Goal::_target_direction_type arg)
  {
    msg_.target_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_Goal>()
{
  return robot1_interfaces::action::builder::Init_Teleop_Goal_target_direction();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_Result_reached_direction
{
public:
  Init_Teleop_Result_reached_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot1_interfaces::action::Teleop_Result reached_direction(::robot1_interfaces::action::Teleop_Result::_reached_direction_type arg)
  {
    msg_.reached_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_Result>()
{
  return robot1_interfaces::action::builder::Init_Teleop_Result_reached_direction();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_Feedback>()
{
  return ::robot1_interfaces::action::Teleop_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_SendGoal_Request_goal
{
public:
  explicit Init_Teleop_SendGoal_Request_goal(::robot1_interfaces::action::Teleop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot1_interfaces::action::Teleop_SendGoal_Request goal(::robot1_interfaces::action::Teleop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_SendGoal_Request msg_;
};

class Init_Teleop_SendGoal_Request_goal_id
{
public:
  Init_Teleop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_SendGoal_Request_goal goal_id(::robot1_interfaces::action::Teleop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Teleop_SendGoal_Request_goal(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_SendGoal_Request>()
{
  return robot1_interfaces::action::builder::Init_Teleop_SendGoal_Request_goal_id();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_SendGoal_Response_stamp
{
public:
  explicit Init_Teleop_SendGoal_Response_stamp(::robot1_interfaces::action::Teleop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot1_interfaces::action::Teleop_SendGoal_Response stamp(::robot1_interfaces::action::Teleop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_SendGoal_Response msg_;
};

class Init_Teleop_SendGoal_Response_accepted
{
public:
  Init_Teleop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_SendGoal_Response_stamp accepted(::robot1_interfaces::action::Teleop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Teleop_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_SendGoal_Response>()
{
  return robot1_interfaces::action::builder::Init_Teleop_SendGoal_Response_accepted();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_GetResult_Request_goal_id
{
public:
  Init_Teleop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot1_interfaces::action::Teleop_GetResult_Request goal_id(::robot1_interfaces::action::Teleop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_GetResult_Request>()
{
  return robot1_interfaces::action::builder::Init_Teleop_GetResult_Request_goal_id();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_GetResult_Response_result
{
public:
  explicit Init_Teleop_GetResult_Response_result(::robot1_interfaces::action::Teleop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot1_interfaces::action::Teleop_GetResult_Response result(::robot1_interfaces::action::Teleop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_GetResult_Response msg_;
};

class Init_Teleop_GetResult_Response_status
{
public:
  Init_Teleop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_GetResult_Response_result status(::robot1_interfaces::action::Teleop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Teleop_GetResult_Response_result(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_GetResult_Response>()
{
  return robot1_interfaces::action::builder::Init_Teleop_GetResult_Response_status();
}

}  // namespace robot1_interfaces


namespace robot1_interfaces
{

namespace action
{

namespace builder
{

class Init_Teleop_FeedbackMessage_feedback
{
public:
  explicit Init_Teleop_FeedbackMessage_feedback(::robot1_interfaces::action::Teleop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot1_interfaces::action::Teleop_FeedbackMessage feedback(::robot1_interfaces::action::Teleop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_FeedbackMessage msg_;
};

class Init_Teleop_FeedbackMessage_goal_id
{
public:
  Init_Teleop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_FeedbackMessage_feedback goal_id(::robot1_interfaces::action::Teleop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Teleop_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot1_interfaces::action::Teleop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot1_interfaces::action::Teleop_FeedbackMessage>()
{
  return robot1_interfaces::action::builder::Init_Teleop_FeedbackMessage_goal_id();
}

}  // namespace robot1_interfaces

#endif  // ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__BUILDER_HPP_
