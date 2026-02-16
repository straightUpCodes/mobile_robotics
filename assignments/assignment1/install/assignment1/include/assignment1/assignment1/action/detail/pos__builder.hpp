// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment1:action/Pos.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1__ACTION__DETAIL__POS__BUILDER_HPP_
#define ASSIGNMENT1__ACTION__DETAIL__POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment1/action/detail/pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_Goal_theta
{
public:
  explicit Init_Pos_Goal_theta(::assignment1::action::Pos_Goal & msg)
  : msg_(msg)
  {}
  ::assignment1::action::Pos_Goal theta(::assignment1::action::Pos_Goal::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_Goal msg_;
};

class Init_Pos_Goal_y
{
public:
  explicit Init_Pos_Goal_y(::assignment1::action::Pos_Goal & msg)
  : msg_(msg)
  {}
  Init_Pos_Goal_theta y(::assignment1::action::Pos_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pos_Goal_theta(msg_);
  }

private:
  ::assignment1::action::Pos_Goal msg_;
};

class Init_Pos_Goal_x
{
public:
  Init_Pos_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_Goal_y x(::assignment1::action::Pos_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pos_Goal_y(msg_);
  }

private:
  ::assignment1::action::Pos_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_Goal>()
{
  return assignment1::action::builder::Init_Pos_Goal_x();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_Result_result_message
{
public:
  Init_Pos_Result_result_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment1::action::Pos_Result result_message(::assignment1::action::Pos_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_Result>()
{
  return assignment1::action::builder::Init_Pos_Result_result_message();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_Feedback_feedback_message
{
public:
  Init_Pos_Feedback_feedback_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment1::action::Pos_Feedback feedback_message(::assignment1::action::Pos_Feedback::_feedback_message_type arg)
  {
    msg_.feedback_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_Feedback>()
{
  return assignment1::action::builder::Init_Pos_Feedback_feedback_message();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_SendGoal_Request_goal
{
public:
  explicit Init_Pos_SendGoal_Request_goal(::assignment1::action::Pos_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::assignment1::action::Pos_SendGoal_Request goal(::assignment1::action::Pos_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_SendGoal_Request msg_;
};

class Init_Pos_SendGoal_Request_goal_id
{
public:
  Init_Pos_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_SendGoal_Request_goal goal_id(::assignment1::action::Pos_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pos_SendGoal_Request_goal(msg_);
  }

private:
  ::assignment1::action::Pos_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_SendGoal_Request>()
{
  return assignment1::action::builder::Init_Pos_SendGoal_Request_goal_id();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_SendGoal_Response_stamp
{
public:
  explicit Init_Pos_SendGoal_Response_stamp(::assignment1::action::Pos_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::assignment1::action::Pos_SendGoal_Response stamp(::assignment1::action::Pos_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_SendGoal_Response msg_;
};

class Init_Pos_SendGoal_Response_accepted
{
public:
  Init_Pos_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_SendGoal_Response_stamp accepted(::assignment1::action::Pos_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Pos_SendGoal_Response_stamp(msg_);
  }

private:
  ::assignment1::action::Pos_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_SendGoal_Response>()
{
  return assignment1::action::builder::Init_Pos_SendGoal_Response_accepted();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_GetResult_Request_goal_id
{
public:
  Init_Pos_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment1::action::Pos_GetResult_Request goal_id(::assignment1::action::Pos_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_GetResult_Request>()
{
  return assignment1::action::builder::Init_Pos_GetResult_Request_goal_id();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_GetResult_Response_result
{
public:
  explicit Init_Pos_GetResult_Response_result(::assignment1::action::Pos_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::assignment1::action::Pos_GetResult_Response result(::assignment1::action::Pos_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_GetResult_Response msg_;
};

class Init_Pos_GetResult_Response_status
{
public:
  Init_Pos_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_GetResult_Response_result status(::assignment1::action::Pos_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Pos_GetResult_Response_result(msg_);
  }

private:
  ::assignment1::action::Pos_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_GetResult_Response>()
{
  return assignment1::action::builder::Init_Pos_GetResult_Response_status();
}

}  // namespace assignment1


namespace assignment1
{

namespace action
{

namespace builder
{

class Init_Pos_FeedbackMessage_feedback
{
public:
  explicit Init_Pos_FeedbackMessage_feedback(::assignment1::action::Pos_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::assignment1::action::Pos_FeedbackMessage feedback(::assignment1::action::Pos_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1::action::Pos_FeedbackMessage msg_;
};

class Init_Pos_FeedbackMessage_goal_id
{
public:
  Init_Pos_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_FeedbackMessage_feedback goal_id(::assignment1::action::Pos_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pos_FeedbackMessage_feedback(msg_);
  }

private:
  ::assignment1::action::Pos_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1::action::Pos_FeedbackMessage>()
{
  return assignment1::action::builder::Init_Pos_FeedbackMessage_goal_id();
}

}  // namespace assignment1

#endif  // ASSIGNMENT1__ACTION__DETAIL__POS__BUILDER_HPP_
