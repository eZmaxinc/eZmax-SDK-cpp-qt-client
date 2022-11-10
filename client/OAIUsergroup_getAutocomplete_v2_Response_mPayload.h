/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUsergroup_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/usergroup/getAutocomplete
 */

#ifndef OAIUsergroup_getAutocomplete_v2_Response_mPayload_H
#define OAIUsergroup_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIUsergroup_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroup_AutocompleteElement_Response;

class OAIUsergroup_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_getAutocomplete_v2_Response_mPayload();
    OAIUsergroup_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIUsergroup_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUsergroup_AutocompleteElement_Response> getAObjUsergroup() const;
    void setAObjUsergroup(const QList<OAIUsergroup_AutocompleteElement_Response> &a_obj_usergroup);
    bool is_a_obj_usergroup_Set() const;
    bool is_a_obj_usergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUsergroup_AutocompleteElement_Response> a_obj_usergroup;
    bool m_a_obj_usergroup_isSet;
    bool m_a_obj_usergroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_getAutocomplete_v2_Response_mPayload)

#endif // OAIUsergroup_getAutocomplete_v2_Response_mPayload_H
