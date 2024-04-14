/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Invoice_getAttachments_v1_Response_mPayload.h
 *
 * Response for GET /1/object/invoice/{pkiInvoiceID}/getAttachments
 */

#ifndef Invoice_getAttachments_v1_Response_mPayload_H
#define Invoice_getAttachments_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Attachmentdocumenttype_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Attachmentdocumenttype_Response;

class Invoice_getAttachments_v1_Response_mPayload : public Object {
public:
    Invoice_getAttachments_v1_Response_mPayload();
    Invoice_getAttachments_v1_Response_mPayload(QString json);
    ~Invoice_getAttachments_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_Attachmentdocumenttype_Response> getAObjAttachmentdocumenttype() const;
    void setAObjAttachmentdocumenttype(const QList<Custom_Attachmentdocumenttype_Response> &a_obj_attachmentdocumenttype);
    bool is_a_obj_attachmentdocumenttype_Set() const;
    bool is_a_obj_attachmentdocumenttype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_Attachmentdocumenttype_Response> m_a_obj_attachmentdocumenttype;
    bool m_a_obj_attachmentdocumenttype_isSet;
    bool m_a_obj_attachmentdocumenttype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Invoice_getAttachments_v1_Response_mPayload)

#endif // Invoice_getAttachments_v1_Response_mPayload_H
