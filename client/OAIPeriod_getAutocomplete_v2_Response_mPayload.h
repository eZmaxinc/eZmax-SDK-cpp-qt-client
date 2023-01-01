/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPeriod_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/period/getAutocomplete
 */

#ifndef OAIPeriod_getAutocomplete_v2_Response_mPayload_H
#define OAIPeriod_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIPeriod_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPeriod_AutocompleteElement_Response;

class OAIPeriod_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIPeriod_getAutocomplete_v2_Response_mPayload();
    OAIPeriod_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIPeriod_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIPeriod_AutocompleteElement_Response> getAObjPeriod() const;
    void setAObjPeriod(const QList<OAIPeriod_AutocompleteElement_Response> &a_obj_period);
    bool is_a_obj_period_Set() const;
    bool is_a_obj_period_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIPeriod_AutocompleteElement_Response> a_obj_period;
    bool m_a_obj_period_isSet;
    bool m_a_obj_period_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPeriod_getAutocomplete_v2_Response_mPayload)

#endif // OAIPeriod_getAutocomplete_v2_Response_mPayload_H