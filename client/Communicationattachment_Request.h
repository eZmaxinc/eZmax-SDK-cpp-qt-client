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
 * Communicationattachment_Request.h
 *
 * A Communicationattachment Object
 */

#ifndef Communicationattachment_Request_H
#define Communicationattachment_Request_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Communicationattachment_Request : public Object {
public:
    Communicationattachment_Request();
    Communicationattachment_Request(QString json);
    ~Communicationattachment_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationattachmentId() const;
    void setPkiCommunicationattachmentId(const qint32 &pki_communicationattachment_id);
    bool is_pki_communicationattachment_id_Set() const;
    bool is_pki_communicationattachment_id_Valid() const;

    qint32 getFkiAttachmentId() const;
    void setFkiAttachmentId(const qint32 &fki_attachment_id);
    bool is_fki_attachment_id_Set() const;
    bool is_fki_attachment_id_Valid() const;

    qint32 getFkiInvoiceId() const;
    void setFkiInvoiceId(const qint32 &fki_invoice_id);
    bool is_fki_invoice_id_Set() const;
    bool is_fki_invoice_id_Valid() const;

    qint32 getFkiSalarypreparationId() const;
    void setFkiSalarypreparationId(const qint32 &fki_salarypreparation_id);
    bool is_fki_salarypreparation_id_Set() const;
    bool is_fki_salarypreparation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_communicationattachment_id;
    bool m_pki_communicationattachment_id_isSet;
    bool m_pki_communicationattachment_id_isValid;

    qint32 m_fki_attachment_id;
    bool m_fki_attachment_id_isSet;
    bool m_fki_attachment_id_isValid;

    qint32 m_fki_invoice_id;
    bool m_fki_invoice_id_isSet;
    bool m_fki_invoice_id_isValid;

    qint32 m_fki_salarypreparation_id;
    bool m_fki_salarypreparation_id_isSet;
    bool m_fki_salarypreparation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Communicationattachment_Request)

#endif // Communicationattachment_Request_H
