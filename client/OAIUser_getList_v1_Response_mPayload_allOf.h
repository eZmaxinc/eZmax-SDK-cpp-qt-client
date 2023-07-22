/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIUser_getList_v1_Response_mPayload_allOf_H
#define OAIUser_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIUser_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser_ListElement;

class OAIUser_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIUser_getList_v1_Response_mPayload_allOf();
    OAIUser_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIUser_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUser_ListElement> getAObjUser() const;
    void setAObjUser(const QList<OAIUser_ListElement> &a_obj_user);
    bool is_a_obj_user_Set() const;
    bool is_a_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUser_ListElement> a_obj_user;
    bool m_a_obj_user_isSet;
    bool m_a_obj_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_getList_v1_Response_mPayload_allOf)

#endif // OAIUser_getList_v1_Response_mPayload_allOf_H