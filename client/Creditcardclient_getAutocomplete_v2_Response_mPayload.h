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
 * Creditcardclient_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/creditcardclient/getAutocomplete
 */

#ifndef Creditcardclient_getAutocomplete_v2_Response_mPayload_H
#define Creditcardclient_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Creditcardclient_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Creditcardclient_AutocompleteElement_Response;

class Creditcardclient_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Creditcardclient_getAutocomplete_v2_Response_mPayload();
    Creditcardclient_getAutocomplete_v2_Response_mPayload(QString json);
    ~Creditcardclient_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Creditcardclient_AutocompleteElement_Response> getAObjCreditcardclient() const;
    void setAObjCreditcardclient(const QList<Creditcardclient_AutocompleteElement_Response> &a_obj_creditcardclient);
    bool is_a_obj_creditcardclient_Set() const;
    bool is_a_obj_creditcardclient_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Creditcardclient_AutocompleteElement_Response> m_a_obj_creditcardclient;
    bool m_a_obj_creditcardclient_isSet;
    bool m_a_obj_creditcardclient_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardclient_getAutocomplete_v2_Response_mPayload)

#endif // Creditcardclient_getAutocomplete_v2_Response_mPayload_H
