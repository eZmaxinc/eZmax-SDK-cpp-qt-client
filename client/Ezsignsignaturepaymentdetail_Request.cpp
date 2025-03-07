/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignsignaturepaymentdetail_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignaturepaymentdetail_Request::Ezsignsignaturepaymentdetail_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignaturepaymentdetail_Request::Ezsignsignaturepaymentdetail_Request() {
    this->initializeModel();
}

Ezsignsignaturepaymentdetail_Request::~Ezsignsignaturepaymentdetail_Request() {}

void Ezsignsignaturepaymentdetail_Request::initializeModel() {

    m_pki_ezsignsignaturepaymentdetail_id_isSet = false;
    m_pki_ezsignsignaturepaymentdetail_id_isValid = false;

    m_fki_glaccountcontainer_id_isSet = false;
    m_fki_glaccountcontainer_id_isValid = false;

    m_t_ezsignsignaturepaymentdetail_description_isSet = false;
    m_t_ezsignsignaturepaymentdetail_description_isValid = false;

    m_d_ezsignsignaturepaymentdetail_amount_isSet = false;
    m_d_ezsignsignaturepaymentdetail_amount_isValid = false;

    m_e_ezsignsignaturepaymentdetail_taxable_isSet = false;
    m_e_ezsignsignaturepaymentdetail_taxable_isValid = false;
}

void Ezsignsignaturepaymentdetail_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignaturepaymentdetail_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignaturepaymentdetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignaturepaymentdetail_id, json[QString("pkiEzsignsignaturepaymentdetailID")]);
    m_pki_ezsignsignaturepaymentdetail_id_isSet = !json[QString("pkiEzsignsignaturepaymentdetailID")].isNull() && m_pki_ezsignsignaturepaymentdetail_id_isValid;

    m_fki_glaccountcontainer_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_glaccountcontainer_id, json[QString("fkiGlaccountcontainerID")]);
    m_fki_glaccountcontainer_id_isSet = !json[QString("fkiGlaccountcontainerID")].isNull() && m_fki_glaccountcontainer_id_isValid;

    m_t_ezsignsignaturepaymentdetail_description_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignsignaturepaymentdetail_description, json[QString("tEzsignsignaturepaymentdetailDescription")]);
    m_t_ezsignsignaturepaymentdetail_description_isSet = !json[QString("tEzsignsignaturepaymentdetailDescription")].isNull() && m_t_ezsignsignaturepaymentdetail_description_isValid;

    m_d_ezsignsignaturepaymentdetail_amount_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezsignsignaturepaymentdetail_amount, json[QString("dEzsignsignaturepaymentdetailAmount")]);
    m_d_ezsignsignaturepaymentdetail_amount_isSet = !json[QString("dEzsignsignaturepaymentdetailAmount")].isNull() && m_d_ezsignsignaturepaymentdetail_amount_isValid;

    m_e_ezsignsignaturepaymentdetail_taxable_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignaturepaymentdetail_taxable, json[QString("eEzsignsignaturepaymentdetailTaxable")]);
    m_e_ezsignsignaturepaymentdetail_taxable_isSet = !json[QString("eEzsignsignaturepaymentdetailTaxable")].isNull() && m_e_ezsignsignaturepaymentdetail_taxable_isValid;
}

QString Ezsignsignaturepaymentdetail_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignaturepaymentdetail_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignaturepaymentdetail_id_isSet) {
        obj.insert(QString("pkiEzsignsignaturepaymentdetailID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignaturepaymentdetail_id));
    }
    if (m_fki_glaccountcontainer_id_isSet) {
        obj.insert(QString("fkiGlaccountcontainerID"), ::Ezmaxapi::toJsonValue(m_fki_glaccountcontainer_id));
    }
    if (m_t_ezsignsignaturepaymentdetail_description_isSet) {
        obj.insert(QString("tEzsignsignaturepaymentdetailDescription"), ::Ezmaxapi::toJsonValue(m_t_ezsignsignaturepaymentdetail_description));
    }
    if (m_d_ezsignsignaturepaymentdetail_amount_isSet) {
        obj.insert(QString("dEzsignsignaturepaymentdetailAmount"), ::Ezmaxapi::toJsonValue(m_d_ezsignsignaturepaymentdetail_amount));
    }
    if (m_e_ezsignsignaturepaymentdetail_taxable.isSet()) {
        obj.insert(QString("eEzsignsignaturepaymentdetailTaxable"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignaturepaymentdetail_taxable));
    }
    return obj;
}

qint32 Ezsignsignaturepaymentdetail_Request::getPkiEzsignsignaturepaymentdetailId() const {
    return m_pki_ezsignsignaturepaymentdetail_id;
}
void Ezsignsignaturepaymentdetail_Request::setPkiEzsignsignaturepaymentdetailId(const qint32 &pki_ezsignsignaturepaymentdetail_id) {
    m_pki_ezsignsignaturepaymentdetail_id = pki_ezsignsignaturepaymentdetail_id;
    m_pki_ezsignsignaturepaymentdetail_id_isSet = true;
}

bool Ezsignsignaturepaymentdetail_Request::is_pki_ezsignsignaturepaymentdetail_id_Set() const{
    return m_pki_ezsignsignaturepaymentdetail_id_isSet;
}

bool Ezsignsignaturepaymentdetail_Request::is_pki_ezsignsignaturepaymentdetail_id_Valid() const{
    return m_pki_ezsignsignaturepaymentdetail_id_isValid;
}

qint32 Ezsignsignaturepaymentdetail_Request::getFkiGlaccountcontainerId() const {
    return m_fki_glaccountcontainer_id;
}
void Ezsignsignaturepaymentdetail_Request::setFkiGlaccountcontainerId(const qint32 &fki_glaccountcontainer_id) {
    m_fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    m_fki_glaccountcontainer_id_isSet = true;
}

bool Ezsignsignaturepaymentdetail_Request::is_fki_glaccountcontainer_id_Set() const{
    return m_fki_glaccountcontainer_id_isSet;
}

bool Ezsignsignaturepaymentdetail_Request::is_fki_glaccountcontainer_id_Valid() const{
    return m_fki_glaccountcontainer_id_isValid;
}

QString Ezsignsignaturepaymentdetail_Request::getTEzsignsignaturepaymentdetailDescription() const {
    return m_t_ezsignsignaturepaymentdetail_description;
}
void Ezsignsignaturepaymentdetail_Request::setTEzsignsignaturepaymentdetailDescription(const QString &t_ezsignsignaturepaymentdetail_description) {
    m_t_ezsignsignaturepaymentdetail_description = t_ezsignsignaturepaymentdetail_description;
    m_t_ezsignsignaturepaymentdetail_description_isSet = true;
}

bool Ezsignsignaturepaymentdetail_Request::is_t_ezsignsignaturepaymentdetail_description_Set() const{
    return m_t_ezsignsignaturepaymentdetail_description_isSet;
}

bool Ezsignsignaturepaymentdetail_Request::is_t_ezsignsignaturepaymentdetail_description_Valid() const{
    return m_t_ezsignsignaturepaymentdetail_description_isValid;
}

QString Ezsignsignaturepaymentdetail_Request::getDEzsignsignaturepaymentdetailAmount() const {
    return m_d_ezsignsignaturepaymentdetail_amount;
}
void Ezsignsignaturepaymentdetail_Request::setDEzsignsignaturepaymentdetailAmount(const QString &d_ezsignsignaturepaymentdetail_amount) {
    m_d_ezsignsignaturepaymentdetail_amount = d_ezsignsignaturepaymentdetail_amount;
    m_d_ezsignsignaturepaymentdetail_amount_isSet = true;
}

bool Ezsignsignaturepaymentdetail_Request::is_d_ezsignsignaturepaymentdetail_amount_Set() const{
    return m_d_ezsignsignaturepaymentdetail_amount_isSet;
}

bool Ezsignsignaturepaymentdetail_Request::is_d_ezsignsignaturepaymentdetail_amount_Valid() const{
    return m_d_ezsignsignaturepaymentdetail_amount_isValid;
}

Field_eEzsignsignaturepaymentdetailTaxable Ezsignsignaturepaymentdetail_Request::getEEzsignsignaturepaymentdetailTaxable() const {
    return m_e_ezsignsignaturepaymentdetail_taxable;
}
void Ezsignsignaturepaymentdetail_Request::setEEzsignsignaturepaymentdetailTaxable(const Field_eEzsignsignaturepaymentdetailTaxable &e_ezsignsignaturepaymentdetail_taxable) {
    m_e_ezsignsignaturepaymentdetail_taxable = e_ezsignsignaturepaymentdetail_taxable;
    m_e_ezsignsignaturepaymentdetail_taxable_isSet = true;
}

bool Ezsignsignaturepaymentdetail_Request::is_e_ezsignsignaturepaymentdetail_taxable_Set() const{
    return m_e_ezsignsignaturepaymentdetail_taxable_isSet;
}

bool Ezsignsignaturepaymentdetail_Request::is_e_ezsignsignaturepaymentdetail_taxable_Valid() const{
    return m_e_ezsignsignaturepaymentdetail_taxable_isValid;
}

bool Ezsignsignaturepaymentdetail_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignaturepaymentdetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_glaccountcontainer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignsignaturepaymentdetail_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezsignsignaturepaymentdetail_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignaturepaymentdetail_taxable.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignaturepaymentdetail_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_t_ezsignsignaturepaymentdetail_description_isValid && m_d_ezsignsignaturepaymentdetail_amount_isValid && m_e_ezsignsignaturepaymentdetail_taxable_isValid && true;
}

} // namespace Ezmaxapi
