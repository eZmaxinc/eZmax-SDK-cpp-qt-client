/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/user/getAutocomplete
 */

#ifndef OAIUser_getAutocomplete_v2_Response_mPayload_H
#define OAIUser_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIUser_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIUser_AutocompleteElement_Response;

class OAIUser_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIUser_getAutocomplete_v2_Response_mPayload();
    OAIUser_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIUser_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUser_AutocompleteElement_Response> getAObjUser() const;
    void setAObjUser(const QList<OAIUser_AutocompleteElement_Response> &a_obj_user);
    bool is_a_obj_user_Set() const;
    bool is_a_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUser_AutocompleteElement_Response> m_a_obj_user;
    bool m_a_obj_user_isSet;
    bool m_a_obj_user_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIUser_getAutocomplete_v2_Response_mPayload)

#endif // OAIUser_getAutocomplete_v2_Response_mPayload_H
